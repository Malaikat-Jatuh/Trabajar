#include<iostream>
#include<algorithm>
#include<vector>

int main() {
	int n, m;
	std::cin >> n;
	int arr1[n];
	for(int &x : arr1) std::cin >> x;
	std::cin >> m;	
	int arr2[m];
	for(int &x : arr2) std::cin >> x;
	std::sort(arr1, arr1 + n);
	std::sort(arr2, arr2 + n);
	std::vector<int> v;
	for (int i = 0; i < n; i++)
		v.push_back(arr1[i]);
	for (int i = 0; i < m; i++)
		v.push_back(arr2[i]);
	std::sort(v.begin(), v.end());
	for (int num : v) std::cout << num << ' ';
}
