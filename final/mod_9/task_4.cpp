#include <iostream>

int main(){
    using namespace std;
    // cout << "=====«Быки и коровы»=====\n";

    string numberOne, numberTwo;
    bool correctNumber;

    while (true){
        int bull = 0, cow = 0;
        do {
            cout << "Enter the desired number: "; cin >> numberOne;
            int quantity = numberOne.length();
            if (quantity != 4) {
                cout << "Error!\n";
                correctNumber = false;
            } else correctNumber = true;
        } while (!correctNumber);
        
        do {
            cout << "Enter the second number: "; cin >> numberTwo;
            int quantity = numberTwo.length();
            if (quantity != 4) {
                cout << "Error!\n";
                correctNumber = false;
            } else correctNumber = true;
        } while (!correctNumber);

        for (int i = 0; i < numberOne.length(); i++){
            for (int j = 0; j < numberTwo.length(); j++){
                if (numberTwo[i] != numberOne[i] && numberTwo[j] != numberOne[j] && numberTwo[j] == numberOne[i]){
                    cow++;
                    numberTwo[j] = '-';
                }
            }
            if (numberTwo[i] == numberOne[i]){
                bull++;
            }
        }
        cout << "Bull: " << bull << ", Cow: " << cow << "\n";
    }
}