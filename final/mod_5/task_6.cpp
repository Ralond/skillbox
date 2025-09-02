#include <iostream>
using namespace std;
int main() {
    int year, month, day;
    int bYear, bMonth, bDay;
 
    cout << "-----Программа для безграмотного бармена-----\n\n";
    cout << "Какая сегодня дата?\n";
    cout << "Введите год: "; cin >> year; 
    cout << "Введите месяц (от 1 до 12): "; cin >> month; 
    cout << "Введите число: "; cin >> day;

    cout << "Когда день рождения у клиента?\n";
    cout << "Введите год: "; cin >> bYear; 
    cout << "Введите месяц (от 1 до 12): "; cin >> bMonth; 
    cout << "Введите число: "; cin >> bDay;
 
    if ((year-bYear) >= 18) {
        if (month > bMonth || month == bMonth && day > bDay){
            cout << "Уже можно";
        }
    } else cout << "Ещё нельзя";
}