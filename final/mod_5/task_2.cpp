#include <iostream>
using namespace std;
int main() {
    int workDay;
    int weekend;
    int day;

    cout << "������� ����� ������: ";
    cin >> day;

    cout << "-----������� ���������-----\n";
    if (day >= 1 && day <= 5 || day >= 8 && day <= 10 || day++ % 7 == 0 || day % 7 == 0){
        cout << "� ��� ����� ��������!\n";
    } else cout << "� ��� ����� ������� ����!\n";

}