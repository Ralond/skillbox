#include <iostream>
#include <vector>
using namespace std;

void sortMod(vector<int> vec){
    int ind = 0;
    for(int i=1; i < vec.size();i++){
        if (abs(vec[i-1]) < abs(vec[i]) && abs(vec[i-1]) < abs(vec[ind])){
            ind = i-1;
        } else if (abs(vec[i]) < abs(vec[ind])) ind = i;
    }
    cout << vec[ind] << " ";

    int left = ind-1, right = ind+1;
    while (left >= 0 && right < vec.size()){
        if (abs(vec[left]) < abs(vec[right])){
            cout << vec[left] << " ";
            left--;
        } else{ 
            cout << vec[right] << " ";
            right++;
        }
    }
    if (left < 0){
        for (int i = right; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
    } else if (right >= vec.size()){
        for (int i = left; i >= 0; i--){
            cout << vec[i] << " ";
        }
    }
}

int main(){
    vector<int> vec = {-100, -50, -5, 1, 10, 15};
    sortMod(vec);
}