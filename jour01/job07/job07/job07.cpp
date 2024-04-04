#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n , reversedNumber = 0, remainder;;
	cout << "Entrez un nombre\n";
	cin >> n;

	while (n != 0) {
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	cout << "Nombre inversé = " << reversedNumber;
	
}