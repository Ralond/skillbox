#include <iostream>
#include <vector>

int jumping(int n, int k = 3){
    if (k == 0) return 0;
    if (k > n) return 1;
    
    return jumping(n, (k-2) + (k-1));
}

int main(){
    int n, k;
    std::cout << "Up to what stage? "; std::cin >> n;
    std::cout << "Maximum jump length: "; std::cin >> k;

    std::cout << "Number of ways: " << jumping(n, k) << std::endl;

}