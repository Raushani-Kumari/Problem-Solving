#include <iostream>
using namespace std;

int main()
{
	int arr[6]= {0,7,2,9,4,5};
	char str[10] = {'D', 'e','v','t', 'o', 'w', 'n'};
	int a = 10;
	
//	int *ptr = &a;
	int *ptr = arr;
	char *s;
	
//	cout << sizeof(ptr) << endl;
//	cout << sizeof(s) << endl;
//	cout << typeid(ptr) << endl;
	
//	cout << *ptr << endl;
//	ptr += 3;
ptr = &arr[2];
	cout << ptr << endl;
	cout << *(ptr) << endl;
	cout << (ptr - arr) << endl;
//	cout << ptr << " " << arr << endl;
	return 0;
}