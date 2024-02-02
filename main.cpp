#include <stdio.h>
#include "Policecar.h"
#include "Ambulance.h"

int main()
{
	printf("出現\n");
	Car* Cars[2];

	Cars[0] = new Policecar;
	Cars[1] = new Ambulance;

	printf("\nサイレン\n");

	Cars[0]->Purr();
	Cars[1]->Purr();

	printf("\n帰宅\n");
	for (int i = 0; i < 2; i++)
	{
		delete Cars[i];
	}

	return 0;
}