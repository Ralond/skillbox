#include <iostream>
using namespace std;
int main(){
    int quantityBarber;
    int totalMan;
    int mansPerBarberPerMonth = 8 * 30;
    int needBarber;
    cout << "----------Количество барберов----------\n";
    cout << "Сколько в городе мужчин? ";
    cin >> totalMan;
    cout << "Сколько в городе барберов? ";
    cin >> quantityBarber;
    //Сколько барберов нужно?
    needBarber = totalMan/mansPerBarberPerMonth;
    if (totalMan % mansPerBarberPerMonth != 0) {
        needBarber++;
    }
    if (needBarber > quantityBarber){
        cout << "Барберов недостаточно! Нужно ещё " << (needBarber - quantityBarber) << " барберов.";
    } else cout << "Барберов достаточно.";
}