#include <iostream>
using namespace std;
int main() {
    int vasyaNuggets;

    cout << "������ �� ���� ������ ��������?\n";
    cout << "������� ��������� ����� ����? ";
    cin >> vasyaNuggets;

    cout << "-------------�������� ����������-------------\n";

    if (vasyaNuggets < 6){
        cout << "������ 6 ��������� �� �������. " << vasyaNuggets << "�� �� ��������.\n";
    } else if (vasyaNuggets % 9 == 0) {
        cout << "��� �� ������ - ����� ����� ���� " << (vasyaNuggets/9) << " ������� �� 9! � ����� ��������� ����� " << vasyaNuggets <<"��.\n";
    } else if (vasyaNuggets % 6 == 0) {
        cout << "��� �� ������ - ����� ����� ���� " << (vasyaNuggets/6) << " ������� �� 6! � ����� ��������� ����� " << vasyaNuggets <<"��.\n";
    } else if (vasyaNuggets >= 15 && (vasyaNuggets - 6) % 9 == 0) {
        cout << "��� �� ������ - ����� ����� ���� " << ((vasyaNuggets - 6) / 9) << " ������� �� 9 � 1 ������� �� 6! � ����� ��������� ����� " << vasyaNuggets <<"��.\n";
    } else if (vasyaNuggets >= 15 && (vasyaNuggets - 9) % 6 == 0) {
        cout << "��� �� ������ - ����� ����� ���� " << ((vasyaNuggets - 9) / 6) << " ������� �� 6 � 1 ������� �� 9! � ����� ��������� ����� " << vasyaNuggets <<"��.\n";
    } else cout << "����� ���������� ���������, ������� 6 ��� 9 ��.";
}