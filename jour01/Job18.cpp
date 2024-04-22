#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showTable(const vector<int>& myArray);
void addElement(vector<int>& myArray, int newValue);

int main()
{
    vector<int> myArray(5,0);

    showTable(myArray); // Appel de la fonction
    addElement(myArray, sizeof(myArray)+1);
   

    showTable(myArray); // Affichage du tableau mis à jour

    return 0;
}

void showTable(const vector<int>& myArray)
{
    cout << "Contenu du tableau : " << endl;
    for (int value : myArray)
    {
        cout << value << endl;
    }
}

void addElement(vector<int>& myArray, int newValue)
{
    myArray.push_back(newValue); // Ajout d'un nouvel élément à la fin
}
