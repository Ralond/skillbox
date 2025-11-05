#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int> vec){
    for(int i = 0; i < vec.size()-1; i++){
        for(int j = i+1; j < vec.size(); j++){
            int temp = vec[i];
            if (vec[i] > vec[j]){
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    return vec;
}

int main(){
    vector<int> vec;
    int num;
    cout << "Enter your number. Input -1 for 5 in ascending order, -2 for exit: ";
    cin >> num;
    
    int count = 0;
    while (num != -2){
        if (num == -1){
            cout <<  "Number: " << vec[vec.size()-1] << endl;
            cout << "Enter your number: ";
            cin >> num;
        } else if (count > 4){
            if (vec.size() > 4){
                if (num < vec[4]){
                    vec[4] = num;
                    sort(vec);
                }
            }
            cout << "Enter your number: ";
            cin >> num;
        } else {
            vec.push_back(num);
            if (count > 0){
                vec = sort(vec);
            }
            count++;
            cout << "Enter your number: ";
            cin >> num;
        }
}
    
}