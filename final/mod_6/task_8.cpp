#include <iostream>
using namespace std;

int main() {
    int maxNumber = 63;
    int minNumber = -1;
    int i = 0;
    int number = 0;
    string ansver;


    cout << "=====Угадай число=====\n";
    cout << "Задумайте число от 1 до 63\n";
    
    while (i < 6){
        if (number == (maxNumber+minNumber)/2+1) {
            number = (maxNumber+minNumber)/2;
        } else number = (maxNumber+minNumber)/2+1;
        cout << "Ваше число больше " << number << "? Напишите 'да' или 'нет': "; cin >> ansver;
        if (ansver == "нет") {
            maxNumber = number;
        } else if (ansver == "да") {
            minNumber = number;
        } else {cout << "Напишите 'да' или 'нет': "; cin >> ansver; i--;}
        i++;
    }
    cout << "Ваше число: " << number;
}