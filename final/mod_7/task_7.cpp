#include <iostream>

using namespace std;
int main() {
    int bacteria, antibiotic, tilda;
    int exterminate = 10, numberMurders;
    bool enough = false;

    cout << "=====��������������=====\n";
    cout << "������� ���������� ��������: "; cin >> bacteria;
    cout << "������� ���������� �����������: "; cin >> antibiotic;

    for (int t = 1; !enough; t++){
        bacteria *= 2; //�������� ������������� � ��� ����
        numberMurders = antibiotic * exterminate; // ��������� ������� �������� �������� � ���� ���
        bacteria -= numberMurders; // ��������� ������� �������� ��������
        exterminate--; // ��������� ����������

        if (bacteria <= 0) {
            cout << "����� " << t << " ���� �������� ������ ���!\n";
            enough = true;
        } else cout << "����� " << t << " ���� �������� �������� " << bacteria << "\n";

        if (exterminate <= 0) {
            cout << "����� " << t << " ���� ���������� �������� �����������\n";
            enough = true;
        }
    }
}