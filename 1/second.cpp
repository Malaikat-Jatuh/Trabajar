#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;

	for (int i = 0; i < n; i+=2) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	for (int i = 1; i < n; i+=2) {
		std::cout << arr[i] << ' ';
	}
}
