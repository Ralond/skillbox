#include <iostream>
using namespace std;
int main(){
    int firstPrise;
    int secondPrise;
    int thirdPrise;
    int total;

    cout << "��������� ������� ������: ";
    cin >> firstPrise;
    
    cout << "��������� ������� ������: ";
    cin >> secondPrise;

    cout << "��������� �������� ������: ";
    cin >> thirdPrise;

    total = firstPrise + secondPrise + thirdPrise;

    if (total > 10000){
        cout << "��� �������� ������ 10%!\n";
        total *= 0.9;
    }

    cout << "����� � ������: " << total;
    
}