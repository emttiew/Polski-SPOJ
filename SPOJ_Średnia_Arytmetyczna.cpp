// SPOJ_Średnia_Arytmetyczna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

float najmniejsza_roznica(float *tab, float ave, float ile);
float wartosc_srednia(float *tab, int ile);
void  najblizsza_wartosc(float *tab, float min, float ave, float ile);

int main()
{
	float srednia;
	int ile;
	float min;
	int test;
		
	cin >> test;
	for (int j = 0; j < test; j++)
	{
		cin >> ile;
		float *tablica;
		tablica = new float[ile];

		for (int i = 0; i < ile; i + 1)
		{
			cin >> tablica[i];
			i++;
		}

		srednia = wartosc_srednia(tablica, ile);

		
		min = najmniejsza_roznica(tablica, srednia, ile);
		najblizsza_wartosc(tablica, min, srednia, ile);
		delete[] tablica;
	}

}

float wartosc_srednia(float *tab, int ile)
{
	float suma = 0;

	for (int i = 0; i < ile; i++)
	{
		suma += *tab;
		tab++;
	}
	return suma / ile;
}

float najmniejsza_roznica(float *tab, float ave, float ile)
{
	float *r;
	r = new float[ile];
	float m;
	

	for (int i = 0; i < ile; i + 1) 
	{
		if (ave > *tab) r[i] = ave - *tab; 
		else r[i] = *tab - ave;
		tab++;
		i++;
	}

	m = r[0];
	

	for (int j = 0; j < ile; j + 1) 
	{
		if (r[j] < m) m = r[j];
		j++;
	}

	return m;
	delete[] r;
}

void najblizsza_wartosc(float *tab, float min, float ave, float ile)
{
	float k = 0;

	for (int l = 0; l < ile; l++)
	{
		if ((ave - *tab) == min || (*tab - ave) == min)
		{
			k = *tab;
			cout << k << " " << endl;
			break;
		}
		tab++;
	}
	
}
