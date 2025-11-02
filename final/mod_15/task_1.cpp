#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> summ(vec.size(),0);
    int start = 0, end = 0, fin = vec.size()-1, sum = 0, temp;

    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    
    for (int i = 0; i < fin; i++){
        temp = 0;
        for(int j = i; j < fin; j++){
            temp += vec[j];
        }
        if (temp > sum){
            start = i;
            end = fin;
            sum = temp;
        }
        fin--;
    }

    cout << start << ", " << end;

}