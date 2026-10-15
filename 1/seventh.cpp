#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;

	int min = 0, max = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] < arr[min]) min = i;
		if (arr[i] > arr[max]) max = i;
	}
	std::swap(arr[max], arr[min]);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
}
