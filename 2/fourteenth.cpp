#include<iostream>
#include<algorithm>

int main() {
	int n;
	std::cin >> n;
	int arr[n], index[n];
	for (int &x : arr) std::cin >> x;
	/*for (int i = 0; i < n; i++)
		arr_sort[i] = arr[i];
	std::sort(arr_sort, arr_sort + n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[i] == arr_sort[j])
				std::cout << i;*/
	
	for (int i = 0; i < n; i++) index[i] = i;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (arr[index[j]] > arr[index[j+1]])
				std::swap(index[j], index[j+1]);
	for (int i = 0; i < n; i++) std::cout << index[i] << ' ';
}
