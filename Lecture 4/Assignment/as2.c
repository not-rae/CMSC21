// as2.c

#include <stdio.h>

// while loop
int main(void)
{
	int i;

	i = 1; 

	while (i < 10){
		printf("%d", i);
		i *= 2;
	}

	return 0;
}

// for loop
// int main(void)
// {
// 	int i;

// 	for (i = 1; i < 10; i *= 2){
// 		printf("%d", i);
// 	}

// 	return 0;
// }

// // do-while loop
// int main(void)
// {
// 	int i;

// 	i = 1; 

// 	do{
// 		printf("%d", i);
// 		i *= 2;
// 	}

// 	while (i < 10);

// 	return 0;
// }