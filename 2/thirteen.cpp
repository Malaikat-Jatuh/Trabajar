#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n - 1; ++j)
			if (arr[j] > arr[j+1])
				std::swap(arr[j], arr[j+1]);
	for (int &x : arr) std::cout << x << ' ';
}
