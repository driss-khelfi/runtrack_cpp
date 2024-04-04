
#include<string>
#include<iostream>

using namespace std;

int main()
{
	
	int myArray[] = { 8, 4, 5, 7, 2 };

	int n = sizeof(myArray) / sizeof(myArray[0]);


	cout << "Array: ";

	for (int i = 0; i < n; i++)
		cout << myArray[i] << " ";

	// Find the minimum element
	cout << "\nMin Element = "
		<< *min_element(myArray, myArray + n);

	
	// Storing the pointer in an address
	int& min = *min_element(myArray, myArray + n);
	


	cout << "\nValeur minimale = " << min;
	
}
