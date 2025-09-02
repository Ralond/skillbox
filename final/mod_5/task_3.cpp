#include <iostream>
using namespace std;
int main() {
    int workDay;
    int weekend;
    int day;
    int startDay;
    cout << "Введите число от 1 до 7 - с какого дня недели начинается месяц: ";
    cin >> startDay;

    if (startDay <= 0 || startDay >= 8) {
        cout << "В неделе всего 7 дней! Введите верное число дня недели: ";
        cin >> startDay;
    }

    cout << "Введите число месяца: ";
    cin >> day;
    cout << "-----Смотрим календарь-----\n";
    if (day >= 1 && day <= 5 || day >= 8 && day <= 10 || (day++ - startDay) % 7 == 0 || (day - startDay) % 7 == 0){
        cout << "В это число выходной!\n";
    } else cout << "В это число рабочий день!\n";

}