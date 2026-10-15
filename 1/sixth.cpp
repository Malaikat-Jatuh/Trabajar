#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for (int &x: arr) std::cin >> x;
	int min = arr[0] - arr[1];
	if (min < 0) min *= -1;
	int min_1 = 0, min_2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int tmp = arr[i] - arr[j];
			if (tmp < 0) tmp *= -1;
			if (tmp < min){	
				min = tmp;
				min_1 = arr[i];
				min_2 = arr[j];
			}
		}
	}
	std::cout << n << '\n' << min_1 << ' ' << min_2 << '\n';
	for (int &x: arr) std::cout << x << ' ';

}
