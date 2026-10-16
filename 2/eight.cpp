#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x : arr) std::cin >> x;
	int max = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++){
			if (arr[i] == arr[j])
				count++; 
		}
		if (count > max)
			max = count;
	}
	std::cout << max;
}
