#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;
	bool f = true;
	for (int i = 1; i < n; i++) {
		if (arr[i*2+1] != arr[i+1])
			f = false;
	}
	std::cout << f;
}
