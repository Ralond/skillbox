#include <iostream>
using namespace std;
int main (){
    int firstStick;
    int twoStick;
    int threeStick;

    cout << "-----�������� �� �����������-----\n";

    cout << "������� ����� ������ �������: ";
    cin >> firstStick;
    cout << "������� ����� ������ �������: ";
    cin >> twoStick;
    cout << "������� ����� ������� �������: ";
    cin >> threeStick;

    if (firstStick >= (twoStick+threeStick) || twoStick >= (firstStick+threeStick) || threeStick >= (firstStick+twoStick)){
        cout << "����������� ������� ������\n";
    } else cout << "����������� ���������!";
} 
