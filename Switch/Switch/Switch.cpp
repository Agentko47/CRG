#include<iostream>
using namespace std;

int main() {
	cout << "Zadaj jedno zo slov pizza, mec, pesnicka :" << endl;
	string slovo;
	int cislo;

	cin >> slovo;
	if (slovo == "pizza") {
		cislo = 1;
	}
	else
		if (slovo == "mec") {
			cislo = 2;
		}
		else
			if (slovo == "pesnicka") {
				cislo = 3;
			}

	switch (cislo) {
	case 1:
		cout << "Som hladny." << endl;
		break;
	case 2:
		cout << "Do zbrane." << endl;
		break;
	case 3:
		cout << "Nananananaaaa." << endl;
		break;
	default:
		cout << "Toto slovo nepoznam." << endl;
		break;
	}

	return 0;
}
