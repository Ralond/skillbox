#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "-----���������� ���� � ����-----\n";
    cout << "������� ��� ��� �������: ";
    cin >> year;

    cout << "-----�������� ������-----\n";

    if (year % 100 == 0 && year % 400 == 0 ){
        cout << "� ���� 366 ����!";
    } else if (year % 100 != 0 && year % 4 == 0)
    {
        cout << "� ���� 366 ����!";
    } else if (year % 100 == 0 || year % 4 != 0) {
        cout << "� ���� 365 ����!";
    }    
}