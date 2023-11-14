#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number : ";
	cin >> n;

	int no_of_zeros = 0, q = 0;

	while(n!= 0) {
		q = n/5;
		no_of_zeros += q;
		n = n/5;
	}
	cout << "No. of zeros : " << no_of_zeros << endl;
}