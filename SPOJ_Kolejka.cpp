// SPOJ_Kolejka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;


int main()
{	

	int ile;
	scanf("%i", &ile);
	char tablica[1000000];

	for (int j = 0; j < ile; j++)
	{		
		scanf("%s", tablica);

		int ileZnakow = strlen(tablica);
		int index;
		index = ileZnakow - 1;
		char* wsk = &tablica[index-1]; // ustawiam wskaźnik na przedostatni element tablicy		

		for (int i = index; i > 0; i--) // wykonuję pętlę od końca ostatniego elementu tablicy
		{

			if (*wsk >= tablica[index]) // jeśli kolejny element tablicy jest wiekszy/rowny od ostatniego najwiekszego to dokonujemy zamiany z elementem, który stoi przed ostatnim najwiekszym...
			{
				if(wsk != &tablica[index-1]) // ... o ile ich adresy nie są równe - unikam w ten sposób niepotrzebnej zamiany tych samych wartości
				tablica[index - 1] = *wsk;
				index--;				
			}
			wsk--;
		}

		for (int i = index; i < ileZnakow; i++) // wypisuję tablice od ostatniego najwiekszego elementu tablicy
		{
			printf("%c", tablica[i]);			
		}
		printf("\n");
	}

	return 0;
}
