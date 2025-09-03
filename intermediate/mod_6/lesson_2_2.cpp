#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string answer;

    cout << "--------Продажа слонов--------\n"; 
    cout << "Как вас зовут?\n";
    getline(cin, name);
    cout << name << ", купи слона!\n"; 
    getline(cin, answer);

    do {
        cout << "Все говорят '" << answer << "', а ты купи слона!\n"; 
        getline(cin, answer);
    } while (1);
}