#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num(0);
	cout << "Entrez un nombre\n";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "Votre nombre est pair\n";
	}
	else
	{
		cout << "Votre nombre est impair\n";
	}

}
