#include <iostream>
using namespace std;

int main() {
    string ansver;
    int i = 10;

    cout << "======������� ������======\n";

    for (; i > 0; i--){
        cout << "�� ������ �������� " << i << " �����. ������ ���������� ������?\n"; cin >> ansver;

        if (ansver == "��") {
            cout << "����� �����������! �� ������ ���������� " << i << " �����.\n";
            break;
        } 
    }
    if (i == 0){
        cout << "����� ����������!";
    }
}