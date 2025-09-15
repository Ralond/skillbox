#include <iostream>
#include <string>

using namespace std;
int main() {
    string answer;
    int n;
    cout << "=====Кожаный мешок=====\n";

    for (int i = 0; answer != "Да, конечно, сделал."; i++){
        n = i+1;
        cout << "Все задания выполнены?\n"; 
        getline(cin, answer);
    }
    cout << "Ну почему тебя нужно спрашивать "<< n << " раз?\n"; 
}