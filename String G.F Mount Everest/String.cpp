#include <iostream>
#include <string>
using namespace std;


int main()
{
	string pozdrav = "Mount Everest";
	string samohlasky = "aeiouyAEIOUY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
	string cisla = "0123456789";
	string text = "Mount Everest";
	string znaky = " ";

	int pocitadloSamohlasok = 0;
	int pocitadloSpoluhlasok = 0;
	int pocitadloCisla = 0;
	int pocitadloZnaky = 0;

	cout << "sprava: " << pozdrav << endl;

	for (int i = 0; i < text.length(); i++) {
		//samohlasky
		if (samohlasky.find(text[i]) < samohlasky.length()) {
			pocitadloSamohlasok++;
		}
		
		//spoluhlasky
		if (spoluhlasky.find(text[i]) < spoluhlasky.length())
			pocitadloSpoluhlasok++;
	
		//cisla 
		if (cisla.find(text[i]) < cisla.length())
			pocitadloCisla++;
	
		//znaky
		if (znaky.find(text[i]) < znaky.length())
			pocitadloZnaky++;
	
	
	
	
	}
		cout <<"Pocet samohlasok: " << pocitadloSamohlasok << endl;
		cout <<"Pocet spoluhlasok: " << pocitadloSpoluhlasok << endl;
		cout <<"Pocet cisel: " << pocitadloCisla << endl;
		cout << "Pocet znakov:" << pocitadloZnaky << endl;
		return 0;
	}
	


