

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int year;
    
    cout << "Entrez une annee!\n";
    cin >> year;
    if (year % 4 != 0)
    {
        cout << "L'annee " << year << " n'est pas bissextile!\n";
    }
    else
    {
        switch (year)
        {
        case 1900:
            cout << "L'annee " << year << " n'est pas bissextile!\n";
            break;
        case 2000:
            cout << "L'annee " << year << " n'est pas bissextile!\n";
            break;
        case 2100:
            cout << "L'annee " << year << " n'est pas bissextile!\n";
            break;
        default:
            cout << "L'annee " << year << " est bissextile!\n";
            break;
    }
   
    }

}
