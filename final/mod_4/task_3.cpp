#include <iostream>
using namespace std;
int main() {
    int number;
    
    cout << "��������� ����� �� ��������.\n";
    cout << "������� �����: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "����� " << number << " � ������!";
    } else {
        cout << "����� " << number << " � ��������!";
    }
}
