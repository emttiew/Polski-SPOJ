// SPOJ_Stos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void push(int *tab, int &rozmiar);
void pop(int *tab, int &rozmiar);

int main()
{
	int tablica[11];
	char wybor;
	int rozmiar = 0;

	while(cin >> wybor)
	{
		
		switch (wybor)
		{
		case '+':
			push(tablica, rozmiar);
			break;
		case '-':
			pop(tablica, rozmiar);
			break;
		}
	}

}

void push(int *tab, int &rozmiar)
{
	if (rozmiar >= 10)
	{
		cout << ":(" << endl;
	}
	else
	{
		rozmiar = rozmiar + 1;
		cin >> tab[rozmiar];
		cout << ":)" << endl;
	}
}

void pop(int *tab, int &rozmiar)
{
	if (rozmiar >= 1)
	{
		cout << tab[rozmiar] << endl;
		rozmiar = rozmiar - 1;
	}
	else
	{
		cout << ":(" << endl;
	}
}