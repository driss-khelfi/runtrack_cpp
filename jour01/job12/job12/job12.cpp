#include <iostream>
using namespace std;

void doubleArray(int* myArray, int size);
void printArray(int* myArray, int size);

int main()
{
    int myArray[] = { 1, 2, 3, 4 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Tableau initial:" << endl;
    printArray(myArray, size);

    doubleArray(myArray, size);

    cout << "Tableau double:" << endl;
    printArray(myArray, size);

    return 0;
}

void doubleArray(int* myArray, int size)
{
    for (int i = 0; i < size; i++)
    {
       *(myArray+i) *= 2;
    }
}

void printArray(int* myArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(myArray + i) << endl;
    }
}
