#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};
    float sum = 0;

    for (int i = 0; i < items.size(); i++){
        if (items[i] >= prices.size() || items[i] < 0) cout << "Error! There is no price under the " << items[i] << " index.\n";
        else {
            sum += prices[items[i]];
        }
    }
    cout << "The cost of purchases is equal to " << sum << "." << endl;
}