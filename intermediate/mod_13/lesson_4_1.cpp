#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> queue;
    int n=0;
    while (n != -1){
        cout << "Enter your number: "; cin >> n;
        queue.push_back(n);
    }

    for (int i = 0; i < queue.size(); i++) cout << queue[i] << " ";
}