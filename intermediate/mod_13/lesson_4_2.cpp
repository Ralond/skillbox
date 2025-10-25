#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> queue;
    int n=0;
    while (n != -1){
        cout << "Enter your number: "; cin >> n;
        for (int i = queue.size(); i >= 0; i--){
            if (queue.size() == 0) queue.push_back(n);
            else if (queue.size() != 0 && n > queue[i-1]){
                queue.pop_back();
            }
            else {
                queue.push_back(n);
                break;
            }
        }
    }
    
    for (int i = 0; i < queue.size(); i++) cout << queue[i] << " ";
}