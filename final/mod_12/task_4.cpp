#include <iostream>
using namespace std;

int main(){
    // cout << "=====Ряд чисел*=====\n";
    int numbers[15];

    cout << "Enter 15 array values: ";
    for (int i = 0; i < 15; i++) cin >> numbers[i];
    
    int summMas = numbers[0], minX = numbers[0];

    for (int i = 1; i < 15; i++){
        if (numbers[i] < minX){
            minX = numbers[i];
        }
        summMas += numbers[i];
    }
    int normSum = minX * 14 + 91; //91 - сумма от 0 до 13
    int doubleX = summMas - normSum; //Вычисляем задвоенное число

    cout << "A repeating number: " << doubleX << "\nMinimum number: " << minX;
}