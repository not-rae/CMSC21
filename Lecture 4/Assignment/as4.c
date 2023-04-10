// as4.c

#include <stdio.h>

int main(void)
{
	int i, power;

	power = 1;

	printf("\nTABLE OF POWERS OF TWO\n");
	printf("\nn\t 2 to the n");
	printf("\n---\t ----------");

	for (i = 0; i <= 10; i++){
		if (i == 0)
			power = 1;

		else
			power *= 2;

		printf("\n%d\t %d", i, power);
	}

	printf("\n");
	return 0;
}
