#include <iostream>
using namespace std;

int main() {
    int ameri�ano = 0; //������� ����� ���������
    int latte = 0; //������� ����� �����
    int water;
    int milk;
    int drink;
    bool forAmericano = true;
    bool forLatte = true;

    cout << "=====����������=====\n";
    cout << "������� ���������� ���� � ��: "; cin >> water ;
    cout << "������� ���������� ������ � ��: "; cin >> milk;

    for (bool lack = false; !lack;) {
        cout << "�������� ������� (1 � ���������, 2 � �����): "; cin >> drink;

// � �������� ��������: "��������� �� ������� �����, ���� ���������� ������������ ������� ���� �� �� ���� �� ��������."
// � "���� ������������ �� ������� ��� ������������� ������ �� ��������, ��������� ������ ������� �����."
// ������, ����� �������� �������� �� ������� ����������� � ����� �����, ���� ������ ������� ������� ������� ������.

        if (drink == 1){
            if (water >= 300) {
                water -= 300;
                ameri�ano += 1;
                cout << "��� ������� �����.\n";
                if (water < 300) {
                    forAmericano = false;
                    cout << "����������� ���� ��� ���������\n";
                }
            } else if (water < 300){
                cout << "������������ ����\n";
                forAmericano = false;
            }
        } else if (drink == 2){
            if (water >= 30 && milk >= 280) {
                water -= 30;
                milk -= 280;
                latte += 1;
                cout << "��� ������� �����.\n";
                if (water < 30 || milk < 280) {
                    forLatte = false; 
                    cout << "����������� ����������� ��� �����\n";
                }
            } else if (water < 30 || milk < 280) {
                if (water < 30) cout << "������������ ����\n";
                if (milk < 280) cout << "������������ ������\n";
                forLatte = false;
                }
        } else cout << "������� '1' ��� '2'.\n";
        if (!forAmericano && !forLatte) lack = true;
    }
    cout << "***�����***\n";
    cout << "������������ ��������:\n";
    cout << "\t����: " << water << "��.\n";
    cout << "\t������: " << milk << "��.\n";
    cout << "������ ��������� ������������: " << ameri�ano << "\n";
    cout << "������ ����� ������������: " << latte << "\n";
    
}