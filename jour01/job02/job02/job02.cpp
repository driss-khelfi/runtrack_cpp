#include<string>
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    cout << "Entrez un premier nombre!\n";
    cin >> num1;
    cout << "Entrez un second nombre!\n";
    cin >> num2;
    result = num1 * num2;
    cout << "Le produit de vos 2 nombres est de " << result << "\n";
    return 0;
}
