#include <iostream>

using namespace std;
int main() {
    int i=0;
    int result=0;
    int square;

    cout << "------����������� ��������------\n";
    cout << "������� ������� �������: "; cin >> square;

    while (i * i < square){
        if (square < 0 ) {
            cout << "������� ������� �� ����������!\n";
            break;
        }
        i++;            
    }

    if (i * i == square) {
        cout << "������� ����������!";
    } else cout << "������� ������� �� ����������!";
}