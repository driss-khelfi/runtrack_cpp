#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a(0), b(0), c(0);
	cout << "Entrez un premier nombre\n";
	cin >> a;
	cout << "Entrez un second nombre\n";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "Votre premier nombre est devenu " << a << " et votre second nombre est devenu " << b << endl;
	return 0;
	

}
