#include <iostream>
#include <string>
using namespace std;
int main() {
    string answer;
    do {
        cout << "��� ������� ���������?\n"; 
        getline(cin, answer);

    } while (answer != "��, �������, ������.");

    cout << "����������� � ��������� ��������!\n"; 
}