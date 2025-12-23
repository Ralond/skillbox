#include <iostream>

int main(){
    using namespace std;
    // cout << "=====Длинное вещественное число=====\n";

    string number;

    while (true) {
        bool good = true;
        int numberCount = 0;

        cout << "Enter the number: "; cin >> number;

        if (number[0] == '.' || number[0] == '-' || (number[0] >= '0' && number[0] <= '9')){
            
            int pointCount = 0;
            if (number[0] == '.'){
                pointCount++;
            } else if (number[0] >= '0' && number[0] <= '9') {
                numberCount++;
            }

            for (int i = 1; i < number.length() && good; i++){
                if (number[i] == '.'){
                    pointCount++;
                } else if (number[i] >= '0' && number[i] <= '9') {
                    numberCount++;
                }
                if (number[i] == '-' || number[i] > 57){
                    good = false;
                }
                if (pointCount > 1 || number[i] == 'e'){
                    good = false;
                }
            }
        } else good = false;

        if (numberCount < 1){
            good = false;
        }

        if (good){
            cout << "Yes!\n";
        } else cout << "No!\n";
    }
}