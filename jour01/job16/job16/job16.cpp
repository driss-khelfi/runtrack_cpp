#include <iostream>
#include <string>
using namespace std;

// Fonction pour trier un tableau de chaînes de caractères
void MySortString(string* arr, int size);

int main() {
    const int size = 5;
    string arr[size];

    cout << "Entrez " << size << " mots : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    MySortString(arr, size);

    cout << "Tableau trie :" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


void MySortString(string* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            
            if (*(arr + j) > *(arr + j + 1)) {
                
                string temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
