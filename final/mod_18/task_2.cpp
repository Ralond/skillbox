#include <iostream>

int jumping(int n, int k = 3) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    
    int count = 0;
    for (int i = 1; i <= k && i <= n; i++) {
        count += jumping(n - i, k);
    }
    return count;
}

int main(){
    int n, k;
    std::cout << "Up to what stage? "; std::cin >> n;
    std::cout << "Maximum jump length: "; std::cin >> k;

    std::cout << "Number of ways: " << jumping(n, k) << std::endl;

}