// find a pair in the given array with the given sum

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of elements of the array : ";
	cin >> n;
	int arr[n];

	cout << "Enter the array : " << endl;
	for(int i = 0; i < n ; i ++) {
		cin >> arr[i];
	}

	cout << "The array is : " << endl;
	for(int i = 0; i < n ; i++) {
		cout  << arr[i] << " " ;
	}

	int sum;
	cout << "\nEnter the sum : ";
	cin >> sum;

	sort(arr, arr+n);

	for(int i = 0; i<n ; i++) {
		int l = arr[i];
		int r = arr[n-1];

		while(l < r) {
			if(l+r < sum) {
				r--;
			} else if(l+r > sum) {
				l++;
			} else {
				cout << l << " " << r ;
				break;
			}
		}
	}

	return 0;


}