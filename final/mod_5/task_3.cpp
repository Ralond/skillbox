#include <iostream>
using namespace std;
int main() {
    int workDay;
    int weekend;
    int day;
    int startDay;
    cout << "������� ����� �� 1 �� 7 - � ������ ��� ������ ���������� �����: ";
    cin >> startDay;

    if (startDay < 1 || startDay > 7) {
        cout << "� ������ ����� 7 ����! ������� ������ ����� ��� ������: ";
        cin >> startDay;
    }

    cout << "������� ����� ������: ";
    cin >> day;
    cout << "-----������� ���������-----\n";
    if (day >= 1 && day <= 5 || day >= 8 && day <= 10 || (day - startDay+1) % 7 == 6 || (day - startDay+1) % 7 == 0){
        cout << "� ��� ����� ��������!\n";
    } else cout << "� ��� ����� ������� ����!\n";

}