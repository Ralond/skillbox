#include <iostream>
using namespace std;
int main(){
    int needMoney;
    int temp=0;
    
    cout << "������� ����������� �����: ";
    cin >> needMoney;

    if (needMoney >= 150000 || needMoney <= 0){
        cout << "������������ ����� ������ - 150 000 ������. ";
        cin >> needMoney;
    } else if(needMoney%100 != 0){
        cout << "����� ������ ���� ������ 100 ������! ";
        cin >> needMoney;
    }

    cout << "-----����������� ������ � ������-----\n";
    cout << "� ������: ";
    if (needMoney >= 5000){
        temp = needMoney/5000;
        cout << temp << " �� 5000 ������ ";
        needMoney = needMoney - temp*5000;
    }
    if (needMoney >= 2000){
        temp = needMoney/2000;
        cout << temp << " �� 2000 ������ ";
        needMoney = needMoney - temp*2000;
    }
    if (needMoney >= 1000){
        temp = needMoney/1000;
        cout << temp << " �� 1000 ������ ";
        needMoney = needMoney - temp*1000;
    }
    if (needMoney >= 500){
        temp = needMoney/500;
        cout << temp << " �� 500 ������ ";
        needMoney = needMoney - temp*500;
    }
    if (needMoney >= 200){
        temp = needMoney/200;
        cout << temp << " �� 200 ������ ";
        needMoney = needMoney - temp*200;
    }
    if (needMoney >= 100){
        temp = needMoney/100;
        cout << temp << " �� 100 ������ ";
        needMoney = needMoney - temp*100;
    }
}