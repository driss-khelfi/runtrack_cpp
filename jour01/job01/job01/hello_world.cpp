// job01.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1, num2, result;
    cout << "Entrez un premier nombre!\n";
    cin >> num1;
    cout << "Entrez un second nombre!\n";
    cin >> num2;
    result = num1 * num2;
    cout << "Le produit de vos 2 nombres est de "<< result << "\n";
    return 0;
}

