#include <iostream>
using namespace std;
int main() {
    int first;
    int second;
    
    cout << "������� ������ �����: ";
    cin >> first;
    cout << "������� ������ �����: ";
    cin >> second;
    cout << "-----���������-----\n";

    if (first%second==0){
        cout << "��, " << first << " ������� �� " << second << " ��� �������!";
    } else {
        cout << "���, " << first << " �� ������� �� " << second << " ��� �������!";
    }
}