#include <iostream>
#include <vector>
using namespace std;
// НЕ ДОДЕЛАЛ
int main(){
    int n;
    cout << "Enter N:"; cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int minOne = vec[0], minTwo = vec[0];
    for(int i = 1; i < n; i++){
        if (minTwo > vec[i]){
            minOne = vec[i];
            if (minTwo > minOne) minTwo = minOne;
        }
    }
    cout << "Heve: " << minTwo << endl;
}