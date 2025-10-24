#include <iostream>
#include <vector>
using namespace std;

vector<int> newVec(vector<int> vec, int val){
    vector<int> newVec(size(vec)+1);
    for (int i=0; i < size(vec); i++){
        newVec[i] = vec[i];
    }
    if (val != -1) newVec[size(vec)] = val;

    return newVec;
}


int main(){
    vector<int> queue = {};

    int age = 0;
    while (age != -1){
        cout << "Enter patient's age: "; cin >> age;

        queue = newVec(queue, age);
    }
    int allAge = 0;
    cout << "All numbers: ";
    for (int i = 0; i < size(queue); i++) allAge += queue[i];
    cout << allAge/(size(queue)-1) << endl;
}