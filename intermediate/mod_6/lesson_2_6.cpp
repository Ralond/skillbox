#include <iostream>

using namespace std;
int main() {
    int i=0;
    int countNum;
    int num=0;

    cout << "--------����� �����--------\n"; 
    cout << "������� ����� ����� �������? "; cin >> countNum;

    while (i != countNum){
        int a;
        cout << "������� " << (i+1) << " �����.\n";
        cin >> a;
        num +=a;
        i++;
    }
    cout << "����� ����� �����: " << num << "\n";
}