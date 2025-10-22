#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter N:"; cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int minOne = INT_MAX, minTwo = INT_MAX;
    for(int i = 0; i < n; i++){
        if (minOne > vec[i]){
            minTwo = minOne;
            minOne = vec[i];
        } else if (minTwo > vec[i] && vec[i] != minOne) minTwo = vec[i];
    }

    if (minTwo == INT_MAX) {
        cout << "All elements are equal or second minimum not found" << endl;
    } else {
        cout << "Second minimum: " << minTwo << endl;
    }
}