#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int credit;
    int payment;
    bool arrears = true;


    cout << "=====����������=====\n";
    cout << "������� ��� ��������: "; cin >> name;
    cout << "������� ����� �����: "; cin >> credit;

    do {
        cout << name <<", �������� ����! ��� ����: " << credit << "\n";
        cout << "������� �����: "; cin >> payment;
        credit -= payment;
        if (credit <= 0) arrears = false;
    } while (arrears);
    
    if (credit < 0){
        credit *= -1;
        cout << name <<", ���� �������! ������� �� �����: " << credit;
    } else cout << name <<", ���� �������!";
}