#include <iostream>
using namespace std;
int main (){
    int firstCar;
    int twoCar;
    int threeCar;
    int fourCar;

    cout << "Введите вес первой машины: ";
    cin >> firstCar;
    cout << "Введите вес второй машины: ";
    cin >> twoCar;
    cout << "Введите вес третьей машины: ";
    cin >> threeCar;
    cout << "Введите вес четвертой машины: ";
    cin >> fourCar;

    if (firstCar >= 1200 || twoCar >= 1200 || threeCar >= 1200 || fourCar >= 1200){
        cout << "Вес машины более 1200 кг! Проезд запрещен!\n";
    } else cout << "Проезд разрешен.";
} 
