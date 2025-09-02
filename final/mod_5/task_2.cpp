#include <iostream>
using namespace std;
int main() {
    int workDay;
    int weekend;
    int day;

    cout << "Введите число месяца: ";
    cin >> day;

    cout << "-----Смотрим календарь-----\n";
    if (day >= 1 && day <= 5 || day >= 8 && day <= 10 || day++ % 7 == 0 || day % 7 == 0){
        cout << "В это число выходной!\n";
    } else cout << "В это число рабочий день!\n";

}