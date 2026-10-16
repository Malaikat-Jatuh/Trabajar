#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x : arr) std::cin >> x;
	bool f = true;
	for (int i = 0; i < n; i++) {
		if (i+=1 != arr[i])
			f = false;	
	}
	std::cout << (f ? "NO" : "YES");
}
