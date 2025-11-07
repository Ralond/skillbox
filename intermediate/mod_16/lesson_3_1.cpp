#include <iostream>
using namespace std;


int tenV(string str){
    int result = 0;
    int step = 1;
    for (int i = str.size()-1; i >= 0; i--){
        result += (str[i]-'0')*step;
        step *=2;
    }
    return result;
}

int main(){
    string str = "100011";
    cout << tenV(str);
}