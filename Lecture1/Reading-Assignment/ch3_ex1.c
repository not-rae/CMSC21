/*ch3_ex1: printf function*/
#include <stdio.h>

int main()
{
	int i, j;
	float x, y;

	i = 10;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

	/*four conversion specifications are replaced by the values 
		of the variables i(%d), j(%d), x(%f), y(%f) in the following order*/

	return 0;
}