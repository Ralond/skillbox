#include <iostream>
using namespace std;
int main() {
    int height;
    int weight;
    int quantityHands;
    int quantityLegs;
    string eyeColor;
    int mileage;

    cout << "������� ���� ���������: ";
    cin >> height;
    cout << "������� ��� ���������: ";
    cin >> weight;
    cout << "������� � �������� ���? ";
    cin >> quantityHands;
    cout << "������� � ��������� ���? ";
    cin >> quantityLegs;
    cout << "����� � ��������� ���� ����? ";
    cin >> eyeColor;
    cout << "����� � ��������� ������? ";
    cin >> mileage;

    cout << "-------------������������� ������ �����������-------------\n";

    if (mileage >= 100){
        cout << "����� ������ ����!";
    } else if (height < 145 || height >=165 || weight <= 45 || weight >=65 || (quantityHands != quantityLegs) || eyeColor == "�������"){
        cout << "����� �� ����� � ����������! (� � ������).";
    }  else cout << "�������!";
}