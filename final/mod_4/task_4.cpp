#include <iostream>
using namespace std;
int main() {
    int experience;
    
    cout << "-----�������� �������-----\n";
    cout << "������� ����� ����� �����: ";
    cin >> experience;
    cout << "-----�������-----\n";

    if (experience >= 1000 & experience < 2500){
        cout << "� ��� 2 �������!";
    } else if (experience >= 2500 & experience < 5000){
        cout << "� ��� 3 �������!";
    } else if (experience >= 5000){
        cout << "� ��� 4 - ������������ �������!";
    } else {
        cout << "� ��� 1 �������!";
    }
}
