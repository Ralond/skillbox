#include <iostream>
using namespace std;
int main() {
    int height;
    int weight;
    int quantityHands;
    int quantityLegs;
    string eyeColor;
    int mileage;

    cout << "Введите рост кандидата: ";
    cin >> height;
    cout << "Введите вес кандидата: ";
    cin >> weight;
    cout << "Сколько у кандидта рук? ";
    cin >> quantityHands;
    cout << "Сколько у кандидата ног? ";
    cin >> quantityLegs;
    cout << "Какой у кандидата цвет глаз? ";
    cin >> eyeColor;
    cout << "Какой у кандидата пробег? ";
    cin >> mileage;

    cout << "-------------Рассматриваем анкету претендента-------------\n";

    if (mileage >= 100){
        cout << "Этого лётчика берём!";
    } else if (height < 145 || height >=165 || weight <= 45 || weight >=65 || (quantityHands != quantityLegs) || eyeColor == "Зеленый"){
        cout << "Таких не берут в космонавты! (И в лётчики).";
    }  else cout << "Полетит!";
}