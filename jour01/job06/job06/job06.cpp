#include<iostream>
#include<string>

using namespace std;

int main()
{
	double priceHT, priceTTC, rate, weight;

	cout << "Entrez votre prix HT du kilo de carottes" << endl;
	cin >> priceHT;

	cout << "Entrez votre poids de carottes" << endl;
	cin >> weight;
	
	cout << "Entrez votre taux" << endl;
	cin >> rate;
	
	priceTTC = (priceHT * weight) * (1 + (rate / 100));
	cout << "Votre prix total est de " << priceTTC << " euros TTC" << endl;
}