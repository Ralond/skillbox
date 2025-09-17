#include <iostream>

using namespace std;
int main(){
    float price;
    float weight;

    cout << "======Орехи======\n";
    
    cout << "Введите цену за 100 грамм: "; cin >> price;
    cout << "Сколько весит продукт? "; cin >> weight;

    price /= 100;
    price *= weight;

    cout << "Стоимость продукта: " <<price << "\n";

}