#include <iostream>

using namespace std;
int main() {
    int countNum;
    int num=0;

    cout << "=====����� ����� (���� for)=====\n";
    cout << "������� ����� ����� �������? "; cin >> countNum;

    for (int i = 0; i != countNum; i++){
        int a;
        cout << "������� " << (i+1) << " �����.\n";
        cin >> a;
        num +=a;
    }
    cout << "����� ����� �����: " << num << "\n";
}