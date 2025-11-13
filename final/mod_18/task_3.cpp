#include <iostream>

void evendigits(long long a, int &b){
    if (a == 0) return;

    if ((a%10)%2 == 0) b++;
    evendigits(a/10, b);
}

int main(){
    long long num = 9223372036854775806;
    int ans = 0;
    evendigits(num, ans);
    std::cout << ans;
}