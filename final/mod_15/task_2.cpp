#include <iostream>
#include <vector>
using namespace std;

void sumOfTwo(vector<int> vec, int result){
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            if (vec[i] + vec[j] == result){
                cout << vec[i] << ", " << vec[j];
                return;
            }
        }
    }
    cout << "No pair found" << endl;
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