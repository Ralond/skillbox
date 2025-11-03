#include <iostream>
#include <vector>
using namespace std;

void fifth(vector<int> vec){
    vector<int> sort(5);
    if (vec.size() <= 1){
        cout << vec[0];
        return;
    }
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            int temp = vec[i];
            if (temp > j){
                vec[i] = vec[j];
                vec[j] = temp;
            } else
            if (j == vec.size()-1) sort[i] = vec[i];
        }
    }
    cout << "Number: " << sort[4] << endl;
}


int main(){
    vector<int> vec;
    int num;
    cout << "Enter your number. Input -1 for 5 in ascending order, -2 for exit: ";
    cin >> num;

    while (num != -2){
        if (num == -1){
            fifth(vec);
            cout << "Enter your number: ";
            cin >> num;
        } else {
            vec.push_back(num);
            cout << "Enter your number: ";
            cin >> num;
        }
    }
    
}