#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(20);
    int count = 0;
    int number = 0;
    int current = 0;

    while (true){
        cout << "input number: "; cin >> number;
        if (number == -1) break;
        if (count < 20) {
            nums[count] = number;
        } else
        if (count >=20){
            current = count%20;
            nums[current] = number;
        }
        count++;
    }
    cout << "Result: ";
    if (count < 20){
        for (int i = 0; i < count; i++) cout << nums[i] << " ";
    } else {
        for (int i = 0; i < nums.size(); i++) cout << nums[(current+1 + i)%20] << " ";
    }
    cout << endl;
}