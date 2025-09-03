#include <iostream>
#include <string>
using namespace std;
int main() {
    string answer;
    do {
        cout << "Все задания выполнены?\n"; 
        getline(cin, answer);

    } while (answer != "Да, конечно, сделал.");

    cout << "Приступайте к следующим заданиям!\n"; 
}