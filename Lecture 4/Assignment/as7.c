// as7.c

#include <stdio.h>

int main(void)
{
	int matrix, point_given;

	int road_networks[8][8] = {
		{1, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 1}
	};

	for (int point = 0 ; point < 8 ; point++){
	    for (int destination = 0 ; destination < 8 ; destination++)

		if (point == 2)
			printf(" [%d]", road_networks[point][destination]);
			
		else if (point == 3){
		    printf(" [%d]", road_networks[point][destination]);
		}
		else{
		    {
			printf("%4d", road_networks[point][destination]);
			matrix += road_networks[point][destination];
		        
		    }
		
		}

		printf("\n");
	}
	
	printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n\n");
	scanf("%d", &point_given);
	
	switch(point_given){
	    case 0:
	        printf("At point: A\n");
	        printf("point: C arrived to charging station\n");
	        break;
	    case 1:
	        printf("At point: B\n");
	        printf("point: C arrived to charging station\n");
	        break;
	    case 2:
	        printf("point: C is a charging station\n");
	        break;
	    case 3:
	        printf("point: D is a charging station\n");
	        break;
	    case 4:
	        printf("At point: E\n");
	        printf("point: D arrived to charging station\n");
	        break;
	    case 5:
	        printf("At point: F\n");
	        printf("point: C arrived to charging station\n");
	        break;
	    case 6:
	        printf("At point: G\n");
	        printf("point: D arrived to charging station\n");
	        break;
	    case 7:
	        printf("At point: H\n");
	        printf("point: C arrived to charging station\n");
	        break;
	    default:
		printf("Invalid.\n");
	}
	return 0;
}