#include <iostream>
using namespace std;
int main() {
    int first;
    int second;
    int result;
    int mind�ounting;
    
    cout << "�������� ����������� � ���.\n";
    cout << "������� ������ �����: ";
    cin >> first;
    cout << "������� ������ �����: ";
    cin >> second;
    cout << "������� �� �����: ";
    cin >> mind�ounting;

    cout << "-----���������-----\n";
    result = first + second;

    if (mind�ounting == result){
        cout << "�����!";
    } else {
        cout << "������! ������ ���������: " << result;
    }
}
