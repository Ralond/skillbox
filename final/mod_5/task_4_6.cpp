#include <iostream>
using namespace std;
int main(){
    int quantityBarber;
    int totalMan;
    int mansPerBarberPerMonth = 8 * 30;
    int needBarber;
    cout << "----------���������� ��������----------\n";
    cout << "������� � ������ ������? ";
    cin >> totalMan;
    cout << "������� � ������ ��������? ";
    cin >> quantityBarber;
    //������� �������� �����?
    needBarber = totalMan/mansPerBarberPerMonth;
    if (totalMan % mansPerBarberPerMonth != 0) {
        needBarber++;
    }
    if (needBarber > quantityBarber){
        cout << "�������� ������������! ����� ��� " << (needBarber - quantityBarber) << " ��������.";
    } else cout << "�������� ����������.";
}