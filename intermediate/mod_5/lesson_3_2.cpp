#include <iostream>
using namespace std;
int main (){
    int firstCar;
    int twoCar;
    int threeCar;
    int fourCar;

    cout << "������� ��� ������ ������: ";
    cin >> firstCar;
    cout << "������� ��� ������ ������: ";
    cin >> twoCar;
    cout << "������� ��� ������� ������: ";
    cin >> threeCar;
    cout << "������� ��� ��������� ������: ";
    cin >> fourCar;

    if (firstCar >= 1200 || twoCar >= 1200 || threeCar >= 1200 || fourCar >= 1200){
        cout << "��� ������ ����� 1200 ��! ������ ��������!\n";
    } else cout << "������ ��������.";
} 
