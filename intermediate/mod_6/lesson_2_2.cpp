#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string answer;

    cout << "--------������� ������--------\n"; 
    cout << "��� ��� �����?\n";
    getline(cin, name);
    cout << name << ", ���� �����!\n"; 
    getline(cin, answer);

    do {
        cout << "��� ������� '" << answer << "', � �� ���� �����!\n"; 
        getline(cin, answer);
    } while (1);
}