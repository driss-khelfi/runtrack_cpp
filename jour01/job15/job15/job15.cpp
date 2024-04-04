#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

void convert(unsigned int num);
bool isParityEven(unsigned int num);

int main() {
    unsigned int num = 0;
    cout << "Entrez un nombre entier : ";
    cin >> num;

    convert(num);

    return 0;
}

void convert(unsigned int num) {
    const int n = 8;
    string binary = bitset<n>(num).to_string();
    string::difference_type one = count(binary.begin(), binary.end(), '1');

    cout << "Binaire : " << binary << endl;
    cout << "Nombre de bits a 1 : " << one << endl;

    cout << "Parite (en utilisant XOR) : " << (isParityEven(num) ? "Vrai" : "Faux") << endl;
}

bool isParityEven(unsigned int num) {
    // Utilise un XOR pour calculer la parité du nombre de bits à 1
    num ^= num >> 16;
    num ^= num >> 8;
    num ^= num >> 4;
    num ^= num >> 2;
    num ^= num >> 1;

    // Retourne vrai si le bit de poids faible est à 0 (parité pair), sinon retourne faux
    return !(num & 1);
}
