#include <iostream>
using namespace std;
int main(){
    int firstSalary;
    int twoSalary;
    int threeSalary;
    int bigSalary;
    int minSalary;

    cout << "----------Разница зарплат----------\n";
    cout << "Введите зарплату первого сотрудника: ";
    cin >> firstSalary;

    cout << "Введите зарплату второго сотрудника: ";
    cin >> twoSalary;

    cout << "Введите зарплату третьего сотрудника: ";
    cin >> threeSalary;

    cout << "-----Считаем-----\n";

    if (firstSalary > twoSalary && firstSalary > threeSalary) {
        bigSalary = firstSalary;
        if (twoSalary < threeSalary) {
            minSalary = twoSalary;
        } else {minSalary = threeSalary;}
    } else if (twoSalary > threeSalary) {
        bigSalary = twoSalary;
        if (firstSalary < threeSalary) {
            minSalary = firstSalary;
        } else {minSalary = threeSalary;}
    } else {
        bigSalary = threeSalary;
        if (firstSalary < twoSalary) {
            minSalary = firstSalary;
        } else {minSalary = twoSalary;}
    }

    cout << "Самая высокая зарплата в отделе: " << bigSalary << " рублей\n";
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << (bigSalary - minSalary) << " рублей\n";
    cout << "Средняя зарплата в отделе: " << ((firstSalary + twoSalary + threeSalary) / 3) << " рублей\n";
    
}