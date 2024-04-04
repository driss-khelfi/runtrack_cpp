

#include <iostream>
#include <cmath>
void power(int& num);

using namespace std;

int main()
{
    int num(0);
    cout << "Saisissez un nombre entier!\n";
    cin >> num;
    power(num);
   
    return 0;

}

void power(int& num)
{
    int total(0);
   
    if (num >= 5)
    {
       for(int i = 5; i<=num; i++)
        {
            total += pow(i, 3);
            cout << total << endl;
           
            
        }
        cout << "La somme des cubes allant de 5^3 a " << num << "^3 " << "est de " << total << endl;
    }
}



