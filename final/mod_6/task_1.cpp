#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int time;

    cout << "�������, ������� ���: "; cin >> time;
    if (time < 0) {
        cout << "�������� �� ����� ���� �������������! \n";
    } else if (time == 0) {
        cout << "�������\n";
    }
    while (i < time) {
        if (time > 0 && time < 24) {
            cout << "��-��!\n";
            ++i;
        } else if (time > 23){
            cout << "������� ���, � ������� 0-23";
            break;
        }
    }
}