#include <iostream>
using namespace std;

void swapValue(int& val1, int& val2);

int main()
{
    int val1(0);
    int val2(0);
    cout << "Entrez une premiere valeur!\n";
    cin >> val1;
    cout << "Entrez une seconde valeur!\n";
    cin >> val2;

   
    swapValue(val1, val2);

    // Affichage des valeurs échangées
    cout << "La premiere valeur est devenue " << val1 << " et la seconde est devenue " << val2 << endl;

    return 0;
}

// Définition de la fonction swapValue
void swapValue(int& val1, int& val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}
