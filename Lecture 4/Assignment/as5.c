// as5.c

#include <stdio.h>

int main()
{
	int start, days, i;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("\n");

	if (days == 32)
		printf("Invalid.");

	else if (days <= 0)
		printf("Invalid.");

	else if (days == 27)
		printf("Invalid.");

	else{

		printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
		scanf("%d", &start);

		for (i = 1; i < start; i++){
		printf("   ");
	}

	for (i = 1; i < days; i++){
		printf("%3d", i);

		if ((start + i - 1) %7 == 0)
			printf("\n");
	}}
	
	return 0;
}
