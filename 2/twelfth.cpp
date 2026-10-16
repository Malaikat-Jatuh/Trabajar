#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x : arr) std::cin >> x;
	for (int i = 0; i < n-1; ++i)
		for (int j = i + 1; j < n; ++j)
			if(arr[i] > arr[j])
				std::swap(arr[i], arr[j]);
	for(int &x : arr) std::cout << x << ' ';
}
