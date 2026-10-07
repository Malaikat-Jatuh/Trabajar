#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;

	std::cout << n << '\n';
	int summ_cht = 0, summ_ne = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 || arr[i] == 0) {
			++summ_cht;
		}
		else { 
			++summ_ne;
		}
	}
	std::cout << summ_cht << " " << summ_ne;
}
