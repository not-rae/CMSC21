// as6.c

#include <stdio.h>
#include <stdbool.h>
#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

// 6a:

int main(){

	bool pathway[8] = {[0] = true, [2] = true};

	for (int i = 0; i < NUM_PATHWAYS; i++){

		if (pathway[i]){
			printf("pathway[%d] is open \n", i);
		}else{
			printf("pathway[%d] is close \n", i);
		}
	}

	return 0;
}

// 6b:

// int main(){

// 	bool pathway[8] = {true, false, true};

// 	for (int i = 0; i < NUM_PATHWAYS; i++){

// 		if (pathway[i]){
// 			printf("pathway[%d] is open \n", i);
// 		}else{
// 			printf("pathway[%d] is close \n", i);
// 		}
// 	}

// 	return 0;
// }