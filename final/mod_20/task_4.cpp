#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>


int condition(std::vector<int> nom, std::vector<int> vec){
    int all = 0;
    for(int i = 0; i < vec.size(); i++){
        std::cout << nom[i] << ": " << vec[i] << std::endl;
        all += nom[i] * vec[i];
    }
    std::cout << "Total amount: " << all;
    return all;
}

int main(){
    std::vector<int> nominal{100, 200, 500, 1000, 2000, 5000}, quantity{0,0,0,0,0,0};
    std::ifstream file("condition.bin", std::ios::binary);
    std::string action = " ";

    
    int maxBills = 1000, actualBills = 0, summ = 0;
    
    std::streampos fileSize = file.tellg();
    if (fileSize == 0){
        std::cout << "The ATM is empty." << std::endl;
    } else {
        for (int i = 0; i < nominal.size(); i++){
            file >> quantity[i];
            std::cout << nominal[i] << ": " << quantity[i];
            actualBills += quantity[i];
            summ += nominal[i] * quantity[i];
        }
    }
    file.close();
    while (action != "close"){
        std::cout << "Enter a request: ";
        std::cin >> action;
        
        if (action == "+"){
            if (actualBills < maxBills){
                int adding = maxBills - actualBills, addNominal;
                int contrAdd = adding;
                std::srand(std::time(nullptr));
                for(int i = 0; i < quantity.size() && adding != 0; i++){
                    addNominal = rand() % nominal.size();
                    if (contrAdd > 7) {
                        quantity[addNominal] += adding / 7;
                        contrAdd -= adding / 7;
                    } else 
                        quantity[addNominal] += contrAdd;
                }
            }
            summ = condition(nominal, quantity);
        } else if (action == "-"){
            int withdrawal, saveSum;
            do{
                std::cout << "How much should I withdraw? (multiple of 100): ";
                std::cin >> withdrawal;
                if(withdrawal % 100 != 0) std::cout << "Incorrect amount" << std::endl;
                saveSum = withdrawal; //на всякий
            } while (withdrawal % 100 != 0);

            if (withdrawal > summ){
                std::cout << "There is not enough money in the ATM!" << std::endl;
            } else {
                for(int i = quantity.size()-1; i >= 0 && withdrawal != 0; i--){
                    if (withdrawal >= nominal[i] && quantity[i] >= 1){
                        while(quantity[i] > 0 && withdrawal >= nominal[i]){
                            quantity[i]--;
                            withdrawal -= nominal[i];
                        }
                    }
                }
            }
            summ = condition(nominal, quantity);
        } else if (action == "close"){
            std::ofstream file("condition.bin", std::ios::binary);
            for (int i = 0; i < quantity.size(); i++){
                file << quantity[i] << std::endl;
            }
            file.close();
            condition(nominal, quantity);
        }
    }

}