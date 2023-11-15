#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter the no. of elements : ";
	cin >> n;

	int arr[n];

	cout << "Enter the elements : " << endl;
	for(int i = 0; i < n ; i++) {
		cin >> arr[i];
	}

	int total_sum = 0;

	for(int i = 0; i<n; i++) {
		total_sum += arr[i];
	}

	int flag = 0;
	int lhs_sum = 0;

	for(int i = 0; i<n; i++) {
		total_sum = total_sum - arr[i];

		if(total_sum == lhs_sum) {
			cout << "Equilibrium index is : " << i << endl;
			cout << "Element at equilibrium index is : " << arr[i];
			flag = 1;
			break;
		} else {
			lhs_sum += arr[i];
		}
	}

	if(flag == 0) {
		cout << "No equilibrium index in present" << endl;
	}
}