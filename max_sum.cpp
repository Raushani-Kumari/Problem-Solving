//max sum - Kadane's Algorithm

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the no. of elements of an array : ";
	cin >> n;

	int arr[n];
	cout << "Enter the array : ";
	for(int i = 0; i <n ; i++) {
		cin >> arr[i];
	}

	int max_sum = INT_MIN, current_sum = 0;

	for(int i = 0; i < n; i++) {
		current_sum = arr[i] + current_sum;

		if(current_sum > max_sum) {
			max_sum = current_sum;
		}
		if(current_sum < 0) {
			current_sum = 0;
		}
	}
	cout << "Max sum is : " << max_sum << endl;
	return 0;
}