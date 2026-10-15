#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;
	bool f = true;
	int difference = arr[1] - arr[0];
	for (int i = 2; i < n; ++i)
		if ((arr[i] - arr[i-1]) != difference) f = false;
	std::cout << (f ? "YES" : "NO");
}
