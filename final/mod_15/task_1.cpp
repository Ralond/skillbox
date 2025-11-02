#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int start = 0, end = 0, fin = vec.size()-1, sum = 0;

    for (int i = 0; i < vec.size()-1; i++){
        int temp = 0;
        for(int j = vec.size()-1; j > i; j--){
            temp += vec[j];
            if (temp > sum) end = j;
        }
        cout << i << " " << sum << " " << temp << " " << end << endl;
        if (temp > sum){
            start = i;
            sum = temp;
        }
    }

    cout << start << ", " << end;

}