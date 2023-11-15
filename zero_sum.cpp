#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of elements of an array : ";
	cin >> n;

	int arr[n];
	cout << "Enter the array : " << endl;

	for(int i = 0; i <n ; i++) {
		cin >> arr[i];
	}

	unordered_map<int,int> mp;
	int sum = 0;
	int find_subarr = 0;

	for(int i = 0; i < n; i++) {
		sum += arr[i];
		if(sum == 0) {
			find_subarr = 1;
		} else {
			if(mp[sum] > 0) {
				find_subarr = 1;
			} else {
				mp[sum]++;
			}
		}

	}
	if(find_subarr == 1) {
		cout << "subarray is present" << endl;
	} else {
		cout << "subarray is not present" << endl;
	}
}