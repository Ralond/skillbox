#include <iostream>
using namespace std;

int main(){
    string one, two;
    cout << "Enter number and float: "; cin >> one >> two;

    string result = one + "." + two;
    double val = stof(result);
    cout << "Number: " << val << endl;
}