#include<string>
#include<iostream>
using namespace std;
int main()
{
    int num, total(0); 
   
    
        cout << "Entrez un premier nombre!\n";
        cin >> num;
        total += num;

        cout << "Entrez un second nombre!\n";
        cin >> num;
        total += num;

        cout << "Entrez un troisieme nombre!\n";
        cin >> num;
        total += num;

        cout << "Entrez un quatrieme nombre!\n";
        cin >> num;
        total += num;

        cout << "Entrez un cinquieme nombre!\n";
        cin >> num;
        total += num;
        
   
        cout<< "La moyenne de vos nombres est de "<< total/5 << "!\n";
        return 0;
   
}
