#include <iostream>
using namespace std;
int main(){
    int firstSalary;
    int twoSalary;
    int threeSalary;
    int bigSalary;
    int minSalary;

    cout << "----------������� �������----------\n";
    cout << "������� �������� ������� ����������: ";
    cin >> firstSalary;

    cout << "������� �������� ������� ����������: ";
    cin >> twoSalary;

    cout << "������� �������� �������� ����������: ";
    cin >> threeSalary;

    cout << "-----�������-----\n";

    if (firstSalary > twoSalary && firstSalary > threeSalary) {
        bigSalary = firstSalary;
        if (twoSalary < threeSalary) {
            minSalary = twoSalary;
        } else {minSalary = threeSalary;}
    } else if (twoSalary > threeSalary) {
        bigSalary = twoSalary;
        if (firstSalary < threeSalary) {
            minSalary = firstSalary;
        } else {minSalary = threeSalary;}
    } else {
        bigSalary = threeSalary;
        if (firstSalary < twoSalary) {
            minSalary = firstSalary;
        } else {minSalary = twoSalary;}
    }

    cout << "����� ������� �������� � ������: " << bigSalary << " ������\n";
    cout << "������� ����� ����� ������� � ����� ������ ��������� � ������: " << (bigSalary - minSalary) << " ������\n";
    cout << "������� �������� � ������: " << ((firstSalary + twoSalary + threeSalary) / 3) << " ������\n";
    
}