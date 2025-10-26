#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sizeVec;
    cout << "Input vector size: "; cin >> sizeVec;
    vector<int> vec(sizeVec);

    cout << "Input numbers: ";
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];

    int deleteNum;
    bool flag = false;
    cout << "Input number to delete: "; cin >> deleteNum;
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == deleteNum) flag = true;
        if (flag) {
            int j = i;
            while (j < vec.size()-1){
                vec[j] = vec[j+1];
                j++;
            }
            vec.pop_back();
            i--;
            flag = false;
        }
    }
    cout << "Result: ";
    for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

}