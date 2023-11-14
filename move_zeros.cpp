#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements of an array : ";
	cin >> n;

	int arr[n];
	cout << "Enter the array : " << endl;
	for(int i = 0; i <n ; i++) {
		cin >> arr[i];
	}

	cout << "The entered array is : ";
	for(int i = 0; i<n; i++) {
		cout << arr[i] << " ";
	}
	int count = 0;
	for(int i = 0 ; i <n ; i++) {
		if(arr[i] != 0) {
			arr[count] = arr[i];
			count++;
		}
	}
	while(count < n) {
		arr[count] = 0;
		count++;
	}

	cout << "\nThe array after moving zeros : ";
	for(int i = 0; i<n; i++) {
		cout << arr[i] << " ";
	}
}
