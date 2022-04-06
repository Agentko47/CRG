#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void napln_pole(int pole[], int dlzka) {

	for (int i = 0; i < dlzka; i++)
	{
		pole[i] = i + 1;
	}
}
int main(){
	// 1.
	int a;
	a = 56;
	cout << "Premenna a ma hodnotu: " << a << " a je v pameti ulozena na adrese " << &a << endl;

	// 2.
	int b = 99;
	int* p_b = &b;
	*p_b = 15;

	cout << "Ukazatel p_b ma hodnotu " << p_b << " a ukazuje na hodnotu " << *p_b << endl;
	cout << "Hodnota ulozena v b je " << b << endl;

	// 3.
	int c1 = 10;
	int c2 = 20;
	swap(&c1, &c2);
	cout << "V cislo1 je cislo " << c1 << " a v cislo2 je cislo " << c2 << endl;

	//4.
	int cisla[10];
	napln_pole(cisla, 10);
	cout << cisla[5] << endl;

	//6. NEW a Delete - dynamicka alokace pamate
	int* cislo = new int;
	double* desetinne_cislo = new double;
	//program
	delete cislo;
	cislo = NULL;
	delete desetinne_cislo;
	desetinne_cislo = NULL;

	// Alokacia poli
	int* pole = new int[10];
	pole[5] = 125;
	delete[] pole; // DEalokacia polas


	int q = 99;
	int* p_q = &q;
	*p_q = 15;

	cout << "Ukazatel p_q ma hodnotu " << p_q << " a ukazuje na hodnotu " << *p_q << endl;
	cout << "Hodnota ulozena v q je " << q << endl;
	
	bool zz = true;
	bool* p_zz = &zz;
	*p_zz = false;

	cout << "Ukazatel p_zz ma hodnotu " << p_zz << " a ukazuje na hodnotu " << *p_zz << endl;
	cout << "Hodnota ulozena v zz je " << zz << endl;

	char x = 99;
	char* p_x = &x;
	*p_x = 3;

	cout << "Ukazatel p_x ma hodnotu " << p_x << " a ukazuje na hodnotu " << *p_x << endl;
	cout << "Hodnota ulozena v x je " << x << endl;

	double y = 34.76;
	double* p_y = &y;
	*p_y = 9;

	cout << "Ukazatel p_y ma hodnotu " << p_y << " a ukazuje na hodnotu " << *p_y << endl;
	cout << "Hodnota ulozena v y je " << y << endl;

	float c = 87.42;
	float* p_c = &c;
	*p_c = 5;

	cout << "Ukazatel p_c ma hodnotu " << p_c << " a ukazuje na hodnotu " << *p_c << endl;
	cout << "Hodnota ulozena v c je " << c << endl;


	return 0;
}