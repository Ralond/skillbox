#include <iostream>
#include <string>
using namespace std;

int main() {
    int numChain;
    int numOne = 1;
    int numTwo = 1;
    int numRelevant;
    int i = 2;


    cout << "=====����� ���������=====\n";
    cout << "������� ����� ������������������: "; cin >> numChain;

    if (numChain == 1){
        numRelevant = numOne;
    } else if (numChain == 2) {
        numRelevant = numTwo;
    }

    while (i < numChain){
        numRelevant = numOne + numTwo;
        numOne = numTwo;
        numTwo = numRelevant;
        ++i;
    }
    cout << "����� � ������������������: " << numRelevant;
}