#include <iostream>
using namespace std;
int main() {
    int time;

    cout << "=====������� (���� for)=====\n";
    cout << "�������, ������� ���: "; cin >> time;
    if (time < 0) {
        cout << "�������� �� ����� ���� �������������! \n";
    } else if (time == 0) {
        cout << "�������\n";
    }
    for (int i = 0; i < time; i++) {
        if (time > 0 && time < 24) {
            cout << "��-��!\n";
        } else if (time > 23){
            cout << "������� ���, � ������� 0-23";
            break;
        }
    }
}