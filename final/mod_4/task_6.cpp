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
        if ((haircutNeed - haircutPerDay)%8==0){
            cout << "� ��� �������� ��������!\n����� ��� " << deficit << " ��������";
        } else {
            cout << "� ��� �������� ��������!\n����� ��� " << (deficit+1) << " ��������";
        }
    }

    if (haircutPerDay>=haircutNeed){
        cout << "�������� ����������!";
    }
    
}