//finding the element(majority element) that is occuring more than n/2 times
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of element : ";
	cin >> n;

	int arr[n];
	cout << "\nEnter the array : " ;
	for(int i = 0; i<n ; i ++) {
		cin >> arr[i];
	}

	int maj_indx = 0, count = 1;

	for(int i = 0; i<n ; i++) {
		if(arr[i] == arr[maj_indx]) {
			count++;
		} else {
			count--;
		}
		if(count==0) {
			maj_indx = i;
			count = 1;
		}
	}

//	checking majority element
	count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == arr[maj_indx]) {
			count++;
		}
	}
	if(count > n/2) {
		cout << "Majority element is : "<<  arr[maj_indx] << endl;

	} else {
		cout << "No majority element" << endl;
	}
	return 0;


}