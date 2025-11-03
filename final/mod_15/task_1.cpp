#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int start = 0, end = 0, sum = vec[0];

    for (int i = 0; i < vec.size()-1; i++){
        int fin = vec.size()-1;
        while (fin > i){
            int temp = 0;
            for(int j = fin; j >= i; j--){
                temp += vec[j];
            }
            if (temp > sum){
                start = i;
                sum = temp;
                end = fin;
            }
            fin--;
        }
    }
    cout << start << ", " << end;
}