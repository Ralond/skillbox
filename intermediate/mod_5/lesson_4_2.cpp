#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    int x;
    int y;

    cout << "������� ������� �������.\n";
    cout << "������: ";
    cin >> a;
    cout << "������: ";
    cin >> b;
    cout << "�����: ";
    cin >> c;
    
    cout << "������� ������� ���������.\n";
    cout << "������ 1: ";
    cin >> x;
    cout << "������ 2 ";
    cin >> y;

    cout << "-------------�������� ����������-------------\n";
    if (a <= x && b <= y || b <= x && a <= y || b <= x && c <= y || c <= x && b <= y || c <= x && a <= y || a <= x && c <= y){
        cout << "�������";
    } else cout << "�� ������";
}