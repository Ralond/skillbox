#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    int sumNumber = 0;
    int sumNumberHalf;
    int numTemp = 0;
    int numLeft = 0;
    int numRight = 0;
    bool full = true;

    cout << "=====Счастливый билетик=====\n";
    cout << "Введите номера билета: "; cin >> number;
    numTemp = number;

    while (numTemp != 0) {
        numTemp /= 10;
        sumNumber++;
    }

    sumNumberHalf = sumNumber/2;

    while (full) {
        if (sumNumber > sumNumberHalf){
            numTemp = number % 10;
            numRight += numTemp;
            number /= 10;
            sumNumber--;
        } else {
            numTemp = number % 10;
            if (numTemp <= 0) {
                numLeft += number;
            } else numLeft += numTemp;
            number /= 10;
            sumNumber--;

        if (sumNumber < 0) full = false;
        }
    }

    if (numLeft == numRight){
        cout << "Билет счастливый!";
    } else cout << "Повезет в следующий раз!";
}