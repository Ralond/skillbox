#include <iostream>
using namespace std;
int main(){
    int firstPrise;
    int secondPrise;
    int thirdPrise;
    int total;

    cout << "Стоимость первого товара: ";
    cin >> firstPrise;
    
    cout << "Стоимость второго товара: ";
    cin >> secondPrise;

    cout << "Стоимость третьего товара: ";
    cin >> thirdPrise;

    total = firstPrise + secondPrise + thirdPrise;

    if (total > 10000){
        cout << "Вам доступна скидка 10%!\n";
        total *= 0.9;
    }

    cout << "Сумма к оплате: " << total;
    
}