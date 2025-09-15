#include <iostream>
using namespace std;
int main() {
    int time;

    cout << "=====Кукушка (цикл for)=====\n";
    cout << "Введите, который час: "; cin >> time;
    if (time < 0) {
        cout << "Значение не может быть отрицательным! \n";
    } else if (time == 0) {
        cout << "Полночь\n";
    }
    for (int i = 0; i < time; i++) {
        if (time > 0 && time < 24) {
            cout << "Ку-ку!\n";
        } else if (time > 23){
            cout << "Введите час, в формате 0-23";
            break;
        }
    }
}