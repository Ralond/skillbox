#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(20);
    int i = 0;
    int number = 0;
    while (i < 20 && number != -1){
        cout << "input number: "; cin >> number;
        if (number == -1) break;
        nums[i] = number;
        i++;
    }
    while (i >= 20 && number != -1){
        cout << "input number: "; cin >> number;
        if (number == -1) break;
        for (int j = 0; j < 19; j++){
            nums[j] = nums[j+1];
        }
        nums[19] = number;
        i++;
    }
    cout << "Result: ";
    for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << endl;
}