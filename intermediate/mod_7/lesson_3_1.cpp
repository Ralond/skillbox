#include <iostream>
#include <string>

using namespace std;
int main() {
    string pass;
    int n;
    cout << "=====������ (���� for)=====\n";

    for (; pass != "0000";){
        cout << "������� ������: \n"; cin >> pass;
        if (pass == "0000") {
            cout << "������ ������!\n";
        } else cout << "������ ��������! ���������� ��� ���\n";
    }
}