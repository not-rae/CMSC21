/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
	/* array to store the names of the planets*/
	char *planets[] = {"Mercury", "Venus", "Earth",
					  "Mars", "Jupiter", "Saturn",
					  "Uranus", "Neptune", "Pluto"};
	int i, j;

	/* loop through each argument passed to the program */
	for (i = 1; i < argc; i++) {

		/* loop through the array of planets */
		for (j = 0; j <NUM_PLANETS; j++)

			/* if the current argument is equal to the name of a planet */
			if (strcmp(argv[i], planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}

		/* if the planet is not in the array */
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}