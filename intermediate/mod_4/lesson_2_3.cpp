#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "----------����� ������ �����----------\n";
    cout << "������� �����: ";
    cin >> a;
    if (a<0){
        a = -a;
    }
    cout << "������ �����: |" << a <<"|";
    
}