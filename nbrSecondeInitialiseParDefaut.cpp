#include <iostream>

using namespace std;

// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

// Main
int main()
{
    int heures(0), minutes(0), secondes(0);

    cout << "le nombre d'heures : "<<endl;
    cin >> heures;

    cout << "le nombre de minutes : "<<endl;
    cin >> minutes;

    cout << "le nombre de secondes : "<<endl;
    cin >> secondes;

    cout << "le nombre de seconde : "<< nombreDeSecondes(heures, minutes, secondes) << endl;

    return 0;
}

// Définition de la fonction, SANS les valeurs par défaut
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}