#include <iostream>
using namespace std;
int main(){
    int profit;
    int firstMark = 10000;
    int twoMark = 50000;
    int tax;

    cout << "----------������ �������������� ������----------\n";
    cout << "������� ��� �����: ";
    cin >> profit;
    // ��������� ������������ �����:
    if (profit <= 0) {
        cout << "������� ������������� �����: ";
        cin >> profit;
    }
    cout << "-----�������-----\n";

    if (profit <= firstMark) {
        tax = profit * 0.13;
    } else if (profit >= firstMark && profit <= twoMark) {
        tax = firstMark * 0.13 + (profit - firstMark) * 0.2;
    } else {
        tax = firstMark * 0.13 + (twoMark - firstMark) * 0.2 + (profit - twoMark) * 0.3;
    }
    cout << "����� ������ �� ��� �����: " << tax;
    
}