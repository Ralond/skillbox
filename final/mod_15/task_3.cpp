#include <iostream>
#include <vector>
using namespace std;

// int fifth(vector<int> vec){
//     vector<int> sort;
//     if (vec.size() <= 1){
//         return vec[0];
//     }
//     int count = 0;
//     for(int i = 0; i < vec.size()-1; i++){
//         for(int j = i+1; j < vec.size(); j++){
//             int temp = vec[i];
//             if (vec[i] > vec[j]){
//                 vec[i] = vec[j];
//                 vec[j] = temp;
//             }
//         }
//         if (count < 5){
//             sort.push_back(vec[i]);
//             count++;
//         } else break;
//     }

//     return sort[sort.size()-1];
// }


int main(){
    vector<int> vec(5);
    int num;
    cout << "Enter your number. Input -1 for 5 in ascending order, -2 for exit: ";
    cin >> num;

    while (num != -2){
        int count = 0;
        if (num == -1){
            cout <<  "Number: " << vec[vec.size()-1] << endl;
            cout << "Enter your number: ";
            cin >> num;
        } else if (count > 0 && num > vec[vec.size()-1]){
            cout << "Enter your number: ";
            cin >> num;
        } else {
            vec.push_back(num);
            if (count > 0){
                for(int i = 0; i < vec.size()-1; i++){
                    for(int j = i+1; j < vec.size(); j++){
                        int temp = vec[i];
                        if (vec[i] > vec[j]){
                            vec[i] = vec[j];
                            vec[j] = temp;
                        }
                    }
                }
                count++;
            }
            cout << "Enter your number: ";
            cin >> num;
        }
    }
    
}