// SPOJ_Obżartuchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
//int czas_zjedzenia(int *tab, );

int main()
{
	int test;


	//cout << "Podaj ile testow: " << endl;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int ile, ciastka;
		int doba = 86400;
		int suma_ciastek = 0;
		int suma_pudelek = 0;
		//cout << "Ile obzartuchow: " << endl;
		cin >> ile;
		//cout << "Ile ciastek w pudelku: " << endl;
		cin >> ciastka;

		int *tablica;
		tablica = new int[ile];
		int *ilosc_ciastek;
		ilosc_ciastek = new int[ile];

		for (int j = 0; j < ile; j+1)
		{
			//cout << "Podaj czas zjedzenia jednego ciastka kolejnych obzartuchow: " << endl;
			cin >> tablica[j];
			j++;
		}

		for (int l = 0; l < ile; l + 1)
		{
			 ilosc_ciastek[l]= doba / tablica[l];
			 l++;
		}

		for (int j = 0; j < ile; j + 1)
		{
			suma_ciastek = suma_ciastek + ilosc_ciastek[j];
			j++;
		}

		if(suma_ciastek%ciastka==0)
			suma_pudelek = suma_ciastek / ciastka;
		else 
			suma_pudelek = (suma_ciastek / ciastka) + 1;
		
		/*for (int j = 0; j < ile; j + 1)
		{
			if (tablica[j] > doba && ilosc_ciastek[j+1]%ile==0)
				suma_pudelek++;
			j++;
		}
		*/



		/*for (int k = 0; k < ile; k++)
		{
			cout << "czas:" << *tablica << endl;
			cout << "ilosc ciastek:" << *ilosc_ciastek << endl;
			tablica++;
			ilosc_ciastek++;
		}*/

		//cout << "Suma ciastek: " << suma_ciastek << endl;
		cout << suma_pudelek << endl;

		delete[] ilosc_ciastek;
		delete[] tablica;

	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
