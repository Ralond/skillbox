#include <iostream>
using namespace std;
int main(){
    int quantityBarber;
    int totalMan;
    int haircutNeed;
    int haircutPerDay;
    int deficit;
    cout << "----------���������� ��������----------\n";
    cout << "������� � ������ ������? ";
    cin >> totalMan;
    cout << "������� � ������ ��������? ";
    cin >> quantityBarber;
    haircutPerDay = quantityBarber*8;
    haircutNeed = totalMan/30;

    if (haircutPerDay<haircutNeed){
        deficit = (haircutNeed - haircutPerDay)/8;
        cout << "� ��� �������� ��������!\n����� ��� " << deficit << " ��������";
    }

    if (haircutPerDay>=haircutNeed){
        cout << "�������� ����������!";
    }
    
}