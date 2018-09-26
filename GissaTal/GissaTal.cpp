// GissaTal.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main()
{
	int tal = 0;
	int antal_variabler;
	int nytt_tal;
	char igen = 'j';

	while ((igen == 'j') || (igen == 'J')) {

		srand((unsigned)time(NULL));
		nytt_tal = rand() % 100 + 1;
		tal = 0;

		printf("Datorn tänker på ett tal mellan ett till 100. Varsågod att gissa: ");

		antal_variabler = scanf_s("%d", &tal);
		getchar();

		while (tal != nytt_tal) {
			if (tal > nytt_tal) {
				printf("För stort");
			}
			else {
				printf("För litet");
			}

			printf("\nGissa igen: ");
			antal_variabler = scanf_s("%d", &tal);
			getchar();
		}
		printf("Rätt gissat! Talet var %d\nVill du gissa igen? (j/n)", nytt_tal);
		igen = getchar();
	}

    return 0;
}

