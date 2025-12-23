#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(){
    std::vector<int> nominal{100, 200, 500, 1000, 2000, 5000}, quantity{0,0,0,0,0,0};
    std::ifstream file("condition.bin", std::ios::binary);
    std::string action = "null";

    
    int maxBills = 1000, actualBills = 0, summ = 0;
    
    std::streampos fileSize = file.tellg();
    if (fileSize == 0){
        std::cout << "The ATM is empty." << std::endl;
    } else {
        for (int i = 0; i < nominal.size(); i++){
            file >> quantity[i];
            std::cout << nominal[i] << ": " << quantity[i];
            actualBills += quantity[i];
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
                    addNominal = rand() % 8 - 1;
                    if (contrAdd > 7) {
                        quantity[addNominal] += adding / 7;
                        contrAdd -= adding / 7;
                    } else 
                        quantity[addNominal] += contrAdd;
                }
            }
            for(int i = 0; i < quantity.size(); i++){
                std::cout << nominal[i] << ": " << quantity[i];
                summ += nominal[i] * quantity[i];
            }
            std::cout << "Total amount: " << summ;
        } else if (action == "-"){
            int withdrawal, saveSum;
            do{
                std::cout << "How much should I withdraw? (multiple of 100): ";
                std::cin >> withdrawal;
                if(withdrawal % 100 != 0) std::cout << "Incorrect amount" << std::endl;
                saveSum = withdrawal; //на всякий
            } while (withdrawal % 100 != 0);
            if (withdrawal >= 5000 && quantity[5] >= 1){
                while(quantity[5] > 0 && withdrawal >= 5000){
                    quantity[5] -= 1;
                    withdrawal -= 5000;
                }
            }
        }
    }

}