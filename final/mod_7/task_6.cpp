#include <iostream>

using namespace std;
int main() {
    int footer, exclamation, tilda;

    cout << "=====������ ����������=====\n";
    cout << "������� ����� ����� �����������: "; cin >> footer;
    cout << "������� ���������� ��������������� ������: "; cin >> exclamation;
    tilda = footer - exclamation;

    for (int i = 0; i <= footer; i++){
        if (i < tilda/2) cout << "~";
        if (i > tilda/2 && i <= (tilda/2 + exclamation)) cout << "!";
        if (i > (tilda/2 + exclamation)) cout << "~";
        }
        cout << "\n";
    }