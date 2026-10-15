#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;
	for (int i = 0; i < n-1; i++) std::swap(arr[i], arr[n-1]);
	for (int &x: arr) std::cout << x << ' ';
}
