#include <iostream>

using namespace std;
int main() {
    int a;
    int b;
    int c;
    int d;

    cout << "--------�������� 3.0--------\n"; 
    while (true){
        cout << "������� 4 �����: ";
        cin >> a >> b >> c >> d;

        if (a+b+c+d == 42) {
            cout << "���� ����������\n";
        } else if (a+b+c+d != 42) {
            cout << "���� ������������, ���������� ��� ���\n";
        }
    }
}