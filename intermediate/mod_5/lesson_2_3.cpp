#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "-----Количество дней в году-----\n";
    cout << "Введите год для расчета: ";
    cin >> year;

    cout << "-----Проводим расчет-----\n";

    if (year % 100 == 0 && year % 400 == 0 ){
        cout << "В году 366 дней!";
    } else if (year % 100 != 0 && year % 4 == 0)
    {
        cout << "В году 366 дней!";
    } else if (year % 100 == 0 || year % 4 != 0) {
        cout << "В году 365 дней!";
    }    
}