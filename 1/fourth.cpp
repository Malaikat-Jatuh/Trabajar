#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;

	std::swap(arr[0], arr[n-1]);
	for (int &x: arr) std::cout << x << ' ';
}
