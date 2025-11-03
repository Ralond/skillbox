#include <iostream>
#include <vector>
using namespace std;

void sumOfTwo(vector<int> vec, int result){
    int firstNum = 0, twoNum;
    int tempSum;
    for(int i = firstNum; i < vec.size()-1; i++){
        tempSum = vec[firstNum] + vec[i+1];
        if(tempSum == result) {
            twoNum = i+1;
            break;
        } else if(i == vec.size()-2){
            firstNum++;
            i = firstNum;
        }
    }
    cout << vec[firstNum] << ", " << vec[twoNum];
}


int main(){
    int length;
    cout << "Enter the length of the array: "; cin >> length;
    vector<int> vec(length);
    cout << "Enter the array values: ";
    for(int i = 0; i < length; i++){
        cin >> vec[i];
    }
    int result;
    cout << "Enter result: "; cin >> result;
    sumOfTwo(vec, result);
}