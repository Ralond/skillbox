#include <iostream>
using namespace std;
int main(){
    int distance = 200;
    int time = 2;
    int speed;
    int ride;

    cout << "----------������� � ������!----------\n";
    cout << "� ��� ���� 2 ����. � ����� ��������� ������ ����������? ";
    cin >> speed;
    ride = speed * time;

    if (ride > distance){
        cout << "�� ��������!\n";
    }

    cout << "������������ ����������: " << ride;
    
}