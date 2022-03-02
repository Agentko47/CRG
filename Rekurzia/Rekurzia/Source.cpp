#include <iostream>

using namespace std;

int main()
{

    int f;      //f=faktorial...hodnota zakladu
    int i;
    int c;
    int vysledok;
    cout << "Zadajte cislo pre vypocet faktorialu \n";
    cin >> f;
    vysledok = f;
    c = (f - 1);
    for (i = 1; i <= c; i++)
    {
        f = (f * i);
    }

    cout << "Faktorial cisla " << vysledok << " je " << f << "\n";
}