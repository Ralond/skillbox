#include <iostream>
#include <string>

using namespace std;
int main() {
    string answer;
    int n;
    cout << "=====������� �����=====\n";

    for (int i = 0; answer != "��, �������, ������."; i++){
        n = i+1;
        cout << "��� ������� ���������?\n"; 
        getline(cin, answer);
    }
    cout << "�� ������ ���� ����� ���������� "<< n << " ���?\n"; 
}