#include <iostream>
#include <vector>
using namespace std;

vector<int> add_to_position(vector<int> vec, int val, int pos){
    vector<int> newVec(size(vec)+1);
    int cc = size(vec);
    for (int i=0; i < cc; i++){
        if (pos == i+1) {
            newVec[i] = val;
            cc++;
            newVec[i+1] = vec[i];
        } else if (size(vec)== cc) {
            newVec[i] = vec[i];
        } else newVec[i] = vec[i-1];
    }
    if (pos == cc+1) newVec[cc] = val;

    return newVec;
}


int main(){
    vector<int> queue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num = 0;
    int place = 0;
    while (true){
        cout << "Enter your number: "; cin >> num;
        if (num == -1) break;
        cout << "Enter your place in the queue: "; cin >> place;
        queue = add_to_position(queue, num, place);
    }
    cout << "All numbers: ";
    for (int i = 0; i < size(queue); i++) cout << queue[i] << " ";
    cout << endl;
}