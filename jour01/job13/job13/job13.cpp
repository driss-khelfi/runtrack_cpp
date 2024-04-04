
#include <iostream>
#include <string>
using namespace std;

void fibo(int &num);

int main()
{
    int n, num(0);
    cout << "Entrez une nombre" << endl;
    cin >> num;
    fibo(num);
    return 0;
}

void fibo(int& num)
{
    int a(0), b(1);
    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
  
}


