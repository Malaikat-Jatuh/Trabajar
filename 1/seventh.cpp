#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;

	int min = 9999, max = -9999;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)
			min = i;
		if (arr[i] > max)
			max = i;
	}
	std::swap(arr[max], arr[min]);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
}
