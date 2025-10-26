#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> queue;
    int n=0;
    while (n != -1){
        cout << "Enter your number: "; cin >> n;
        queue.push_back(n);
        int qr = sqrt(queue.size())+1;
        if (queue.size()+2 == pow(2, qr)) cout << "Moving on to the next room\n"; //Размер вектора увеличивается каждую степень двойки
    }

    for (int i = 0; i < queue.size(); i++) cout << queue[i] << " ";
}