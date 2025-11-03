#include <iostream>
#include <vector>
using namespace std;

void maxSumm(vector<int> vec){
    int start = 0, end = 0, sum = vec[0];
    int tempSt = 0, tempSum = vec[0];

    for (int i = 1; i < vec.size(); i++){
        if (tempSum < 0){
            tempSum = vec[i];
            tempSt = i;
        } else tempSum += vec[i];

        if (tempSum > sum){
            sum = tempSum;
            start = tempSt;
            end = i;
        }
    }
    cout << start << ", " << end;
}


int main(){
    int length;
    cout << "Enter the length of the array: "; cin >> length;
    vector<int> vec(length);
    cout << "Enter the array values: ";
    for(int i = 0; i < length; i++){
        cin >> vec[i];
    }
    maxSumm(vec);
}