#include <iostream>

int main(){
    using namespace std;
    // cout << "=====Из обычных чисел — в римские=====\n";
    int number;
    while (true){
        string rimNumber = "";

        do {
            cout << "Enter the number: "; cin >> number;
            if (number < 1 || number > 3999) cout << "Error!\n";
        } while (number < 1 || number > 3999);

        while (number >= 1000){
            rimNumber += 'M';
            number -= 1000;
        }

        if (number >= 900){
            rimNumber += "CM";
            number -= 900;
        } else if (number >= 500){
            rimNumber += 'D';
            number -= 500;   
        } else if (number >= 400){
            rimNumber += "CD";
            number -= 400;    
        }
        while (number >= 100){
            rimNumber+= 'C';
            number -= 100;
        }
        if (number >= 90){
            rimNumber += "XC";
            number -= 90;
        } else if (number >= 50){
            rimNumber += 'L';
            number -= 50;
        } else if (number >= 40){
            rimNumber += "XL";
            number -= 40;
        }
        while (number >= 10){
            rimNumber += 'X';
            number -= 10;
        }
        if (number >= 9){
            rimNumber += "IX";
            number -= 9;
        } else if (number >= 5){
            rimNumber += 'V';
            number -= 5;
        } else if (number >= 4){
            rimNumber += "IV";
            number -= 4;
        }
        while (number >= 1){
            rimNumber += 'I';
            number -= 1;
        }
        cout << "Roman numeral: " << rimNumber << "\n";
    }
}