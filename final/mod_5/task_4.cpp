#include <iostream>
using namespace std;
int main(){
    int needMoney;
    int temp=0;
    
    cout << "Введите необходимую сумму: ";
    cin >> needMoney;

    if (needMoney >= 150000 || needMoney <= 0){
        cout << "Максимальная сумма выдачи - 150 000 рублей. ";
        cin >> needMoney;
    } else if(needMoney%100 != 0){
        cout << "Сумма должна быть кратна 100 рублям! ";
        cin >> needMoney;
    }

    cout << "-----Выполняется расчёт к выдаче-----\n";
    cout << "К выдаче: ";
    if (needMoney >= 5000){
        temp = needMoney/5000;
        cout << temp << " по 5000 рублей ";
        needMoney = needMoney - temp*5000;
    }
    if (needMoney >= 2000){
        temp = needMoney/2000;
        cout << temp << " по 2000 рублей ";
        needMoney = needMoney - temp*2000;
    }
    if (needMoney >= 1000){
        temp = needMoney/1000;
        cout << temp << " по 1000 рублей ";
        needMoney = needMoney - temp*1000;
    }
    if (needMoney >= 500){
        temp = needMoney/500;
        cout << temp << " по 500 рублей ";
        needMoney = needMoney - temp*500;
    }
    if (needMoney >= 200){
        temp = needMoney/200;
        cout << temp << " по 200 рублей ";
        needMoney = needMoney - temp*200;
    }
    if (needMoney >= 100){
        temp = needMoney/100;
        cout << temp << " по 100 рублей ";
        needMoney = needMoney - temp*100;
    }
}