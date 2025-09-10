#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int credit;
    int payment;
    bool arrears = true;


    cout << "=====Коллекторы=====\n";
    cout << "Введите имя должника: "; cin >> name;
    cout << "Введите сумму долга: "; cin >> credit;

    do {
        cout << name <<", погасите долг! Ваш долг: " << credit << "\n";
        cout << "Внесите сумму: "; cin >> payment;
        credit -= payment;
        if (credit <= 0) arrears = false;
    } while (arrears);
    
    if (credit < 0){
        credit *= -1;
        cout << name <<", долг погашен! Остаток на счету: " << credit;
    } else cout << name <<", долг погашен!";
}