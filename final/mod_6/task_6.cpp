#include <iostream>
using namespace std;

int main() {
    int xInvest, yInterest, pWish;
    int xPenny, pPenny;
    bool done = false;
    int years = 0;


    cout << "=====������=====\n";
    cout << "������� ������ ������: "; cin >> xInvest;
    cout << "������� ���������� ������: "; cin >> yInterest;
    cout << "������� �������� �����: "; cin >> pWish;

    xPenny = xInvest * 100;
    pPenny = pWish * 100;

    if (xPenny >= pPenny) {
        done = true;
    } else if (yInterest <= 0) {
        cout << "���� ����������� ��� ������ ���������� ������.\n";
        done = true;
    } else {
        while (!done){
            years++;
            xPenny = (xPenny * yInterest + xPenny) / 10;
            if (xPenny >= pPenny) done = true;
        }
    }

    cout << "������� ���������: " << years << " ���";
}