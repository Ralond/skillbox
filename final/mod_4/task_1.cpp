#include <iostream>
using namespace std;
int main(){
    int first;
    int second;
    cout << "������ ����������� ��������.\n";
    cout << "������� ������ �����: ";
    cin >> first;
    cout << "������� ������ �����: ";
    cin >> second;
    cout << "-----���������-----\n";
    if (first == second){
        cout << "����� �����!";
    } else if (first > second){
        cout << "���������� �����: " << second;
    } else {
        cout << "���������� �����: " << first;
    }
  
}
