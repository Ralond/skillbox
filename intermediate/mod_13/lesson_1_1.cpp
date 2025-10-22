#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter N:"; cin >> n;

    vector<int> mass(n);
    for (int i = 0; i < n; i++) cin >> mass[i];

    int sredArifm = 0;
    for (int i = 0; i < n; i++) sredArifm += mass[i];
    sredArifm /= n;
    cout << "Srednee arifmeticheskoe = " << sredArifm << endl;
}