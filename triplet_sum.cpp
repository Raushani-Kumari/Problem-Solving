#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "enter the size of array" << endl;
	cin >> n;

	int arr[n];
	cout << "enter the array : " << endl;
	for(int j = 0; j< n; j++) {
		cin >> arr[j];
	}

	int sum;
	cout << "enter the sum:" << endl;
	cin >> sum;

	sort(arr, arr+n);

	int flag = 0;
	for( int i = 0; i < n-2 && flag == 0; i++) {
		int l = i+1;
		int h = n-1;

		while(l < h) {
			if(arr[i] + arr[l] + arr[h] == sum) {
				flag = 1;
				cout << arr[i] << " " << arr[l] << " " << arr[h] ;
				break;
			} else if(arr[i] + arr[l] + arr[h] > sum) {
				h--;
			} else {
				l++;

			}

		}

	}
	if(flag == 0) {
		cout << "no triplet found" << endl;
	}
	return 0;
}