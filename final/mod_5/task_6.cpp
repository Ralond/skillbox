#include <iostream>
using namespace std;
int main() {
    int year, month, day;
    int bYear, bMonth, bDay;
 
    cout << "-----��������� ��� ������������� �������-----\n\n";
    cout << "����� ������� ����?\n";
    cout << "������� ���: "; cin >> year; 
    cout << "������� ����� (�� 1 �� 12): "; cin >> month; 
    cout << "������� �����: "; cin >> day;

    cout << "����� ���� �������� � �������?\n";
    cout << "������� ���: "; cin >> bYear; 
    cout << "������� ����� (�� 1 �� 12): "; cin >> bMonth; 
    cout << "������� �����: "; cin >> bDay;
 
    if ((year-bYear) >= 18) {
        if (month > bMonth || month == bMonth && day > bDay){
            cout << "��� �����";
        }
    } else cout << "��� ������";
}