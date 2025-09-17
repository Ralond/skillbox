#include <iostream>

using namespace std;
int main(){
    float price, discount;
    float weight;

    cout << "======Постоянный покупатель======\n";
    
    cout << "Введите цену за 100 грамм: "; cin >> price;
    cout << "Сколько весит продукт? "; cin >> weight;
    cout << "Сколько процентов скидка? "; cin >> discount;

    price /= 100;
    price *= weight;
    price -= price * (discount / 100);

    cout << "Стоимость продукта: " <<price << "\n";

}