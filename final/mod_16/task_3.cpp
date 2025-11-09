#include <iostream>
#include <sstream>
using namespace std;


int main(){
    string action;
    while (true){
        cout << "Enter the equation: ";
        cin >> action;

        if (action == "exit") break;
        
        stringstream bufferAction(action);
        double one, two;
        char sign;
        bufferAction >> one >> sign >> two;

        double result;
        if (sign == '+'){
            result = one + two;
        } else
        if (sign == '-'){
            result = one - two;
        } else
        if (sign == '/'){
            result = one / two;
        } else
        if (sign == '*'){
            result = one * two;
        }

        cout << "Result = " << result << endl;
    }
}