#include<iostream>

int main () {
	int number;
	std::cin >> number;
	int arr[number];
	for (int &x: arr) std::cin >> x;
	std::cout << number << '\n';
	for (int i = number - 1; i >= 0; i--) {
		std::cout << arr[i] << " ";
	}
}
