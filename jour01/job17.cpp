#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <map>
using namespace std;

int random();
void afficherSpecialite(map<string, int>& section);

int main()
{
    map<string, int> section;
    section["IA"] = random();
    section["Web"] = random();
    section["Logiciel"] = random();
    section["Cyber Securite"] = random();
    section["Systeme Immersif"] = random();
    afficherSpecialite(section);
    return 0;
}

int random()
{
    return rand() % (66 - 12 + 1) + 12;
}

void afficherSpecialite(map<string, int>& section)
{
    for (auto it = section.begin(); it != section.end(); ++it)
    {
        cout << it->first << " contient " << it->second << " places" << endl;
        cout << "Il reste " << 66-it->second << " places" << " dans la section "<< it->first << endl;
    }
}
