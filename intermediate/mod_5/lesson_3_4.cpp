#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    int result;

    cout << "-----�������� ����� �� ����������-----\n";

    cout << "������� ������ �����: ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;
    cout << "������� ������ �����: ";
    cin >> c;

    if (a == b && a == c){
        result = 3;
    } else if (a == b || a == c || b == c) {
        result = 2;
    } else result = 0;

    cout << result << " ����������� �����!";
} 
