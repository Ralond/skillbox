#include <iostream>
#include <vector>
using namespace std;

vector<int> newQueue(vector<int> vec, int val){
    vector<int> newVec(size(vec)+1);
    for (int i=0; i < size(vec); i++){
        newVec[i] = vec[i];
    }
    newVec[size(vec)] = val;

    return newVec;
}


int main(){
    vector<int> queue = {};

    int num = 0;
    while (num != -1){
        cout << "Enter your number: "; cin >> num;

        queue = newQueue(queue, num);
    }
    cout << "All numbers: ";
    for (int i = 0; i < size(queue); i++) cout << queue[i] << " ";
    cout << endl;
}