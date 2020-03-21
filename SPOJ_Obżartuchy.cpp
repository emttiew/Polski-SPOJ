
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

