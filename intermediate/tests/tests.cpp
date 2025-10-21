#include <iostream>

using namespace std;
void combsort(int* l, int* r) {
	int sz = r - l;
	if (sz <= 1) return;
	double k = 1.2473309;
	int step = sz - 1;
	while (step > 1) {
		for (int* i = l; i + step < r; i++) {
			if (*i > *(i + step))
				swap(*i, *(i + step));
		}
		step /= k;
	}
	bool b = true;
	while (b) {
		b = false;
		for (int* i = l; i + 1 < r; i++) {
			if (*i > *(i + 1)) {
				swap(*i, *(i + 1));
				b = true;
			}
		}
	}
}



int main() {
    int arr[] = {45,65,32,876,23,54,7,43,6,3,5,345,76,6,5,4,23};
    int sizeArr = size(arr); 


    combsort(arr, arr+sizeArr); 

    for (int i = 0; i < size(arr); i++) cout << arr[i] << " ";
}