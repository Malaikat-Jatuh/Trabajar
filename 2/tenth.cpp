#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x : arr) std::cin >> x;
	int max = 0, tmp = 1;
	for (int i = 1 ; i < n; ++i) {
		if (arr[i-1] < arr[i]) {
			++tmp;
		}
		else if (max < tmp) {
			max = tmp;
			tmp = 1;
		}
	}
	std::cout << max;
}
