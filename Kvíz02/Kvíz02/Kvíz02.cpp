#include<iostream>
using namespace std;

int main() {
	string pismeno;
	int vysledok;
	cout << "VITAJ VO KVIZE" << endl;

	cout << "(zadavaj velke pismena)" << endl;
	cout << "1. otazka:" << endl;
	cout << "V aky den oslavujeme Vianoce?" << endl;
	cout << "A: 25.12." << endl;
	cout << "B: 28.12" << endl;
	cout << "C: 26.12" << endl;
	cout << "D: 24.12" << endl;

	cin >> pismeno;
	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Nespravna odpoved." << endl;
		break;
	case 2:
		cout << "Nespravna odpoved." << endl;
		break;
	case 3:
		cout << "Nespravna odpoved." << endl;
		break;
	case 4:
		cout << "Spravna odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	cout << "2. otazka:" << endl;
	cout << "Co je hlavou pocitaca?" << endl;
	cout << "A: Zdroj" << endl;
	cout << "B: Procesor" << endl;
	cout << "C: SSD Disk" << endl;
	cout << "D: RAMka" << endl;

	cin >> pismeno;
	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Nespravna odpoved." << endl;
		break;
	case 2:
		cout << "Spravna odpoved." << endl;
		break;
	case 3:
		cout << "Nespravna odpoved." << endl;
		break;
	case 4:
		cout << "Nespravna odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	cout << "3. otazka:" << endl;
	cout << "V akom roku skocila prva svetova vojna?" << endl;
	cout << "A: 1915" << endl;
	cout << "B: 1905" << endl;
	cout << "C: 1918" << endl;
	cout << "D: 1923" << endl;
	cin >> pismeno;

	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Nespravna odpoved." << endl;
		break;
	case 2:
		cout << "Nespravna odpoved." << endl;
		break;
	case 3:
		cout << "Spravna odpoved." << endl;
		break;
	case 4:
		cout << "Nespravna odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	return 0;
}
