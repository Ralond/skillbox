#include <iostream>
using namespace std;
int main(){
    int distance = 200;
    int time = 2;
    int speed;
    int ride;

    cout << "----------Поездка в Рязань!----------\n";
    cout << "У вас есть 2 часа. С какой скоростью поедет автомобиль? ";
    cin >> speed;
    ride = speed * time;

    if (ride > distance){
        cout << "Вы приехали!\n";
    }

    cout << "Преодоленное расстояние: " << ride;
    
}