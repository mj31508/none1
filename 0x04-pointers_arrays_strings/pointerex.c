#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int tuna = 19;

	printf("Address \t Name \t Value \n");

	int * pTuna = &tuna;

	printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);

	printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

	return 0;
}
