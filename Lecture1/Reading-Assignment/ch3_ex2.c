/*ch3_ex2: Prints int and float values in various formats*/
#include <stdio.h>

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	/*NOTE:
		%5d = prints a minimum of 5 characters (decimal form); since i has only 2 characters, 3 spaces were addeed
		%-5d = similar to %5d but 3 spaces are added afterward
		%5.3d = min. 5 characters overall and min. of 3 digits (decimal form); +2 zeros to guarantee 3 digits
					and +2 spaces for a total of five characters

		%10.3f = 10 characters overall w/ 3 decimal point; x requires 7 characters, 3 spaces come before x
		%10.3e = 10 characters overall (exponential form) w/ 3 decimal point; x requires 9 characters, one space come before x
		%-10g = 10 charac. overall (decimal or exponential form); display x in decimal form. 
					"-" means left justification, 4 spaces added afterward*/
	return 0;
}