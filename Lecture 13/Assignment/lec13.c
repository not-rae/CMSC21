// ARSENAL, Jullene Rae S.
// Lecture 13 - Assignment (Structures)


#include <stdio.h>
#include <math.h>

// defines the data structures for a line
struct line{
	struct point{
		float x;
		float y;
	}point1, point2, midpoint;
	float slope;
	float distance;
};

// function that calculates the slope of the line
float solveSlope(struct line line1){

	// formula: (y2 - y1) / (x2 - x1)
	line1.slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x); 
	return line1.slope; 
}

// function that calculates the midpoint of the line
struct line solveMidpoint(struct line line1){

	// formula: (x1 + x2)/2 , (y1 + y2)/2
	line1.midpoint.x = (float)((line1.point1.x + line1.point2.x) / 2.0); // x value
	line1.midpoint.y = (float)((line1.point1.y + line1.point2.y) /2.0); // y value
	return line1;
}

// function that calculates the distance between the two points
float solveDistance(struct line line1){

	// formula: sqrt((x1 - x2)^2) + (y1 - y2)^2)
	line1.distance = sqrt(pow(line1.point2.x-line1.point1.x, 2) + pow(line1.point2.y-line1.point1.y, 2));
	return line1.distance;
}

// function that calculates the slope-intercept form of the line
void getSlopeInterceptForm(struct line line1){

	float b; // y-intercept
	b = line1.point1.y - (line1.point1.x * solveSlope(line1)); // formula: b = y - mx
	printf("y= %.2fx + (%.2f)\n", solveSlope(line1), b);
}


int main(void){
	struct line l;

	// prompt the user to enter x and y values (point 1)
	printf("Enter x and y for point1: ");
	scanf("%f%f", &l.point1.x, &l.point1.y);

	// prompt the user to enter x and y values (point 2)
	printf("Enter x and y for point2: ");
	scanf("%f%f", &l.point2.x, &l.point2.y);

	printf("Slope: %.2f\n", solveSlope(l));

	printf("Midpoint: %.2f, %.2f\n", solveMidpoint(l).midpoint.x, solveMidpoint(l).midpoint.y);

	printf("Distance between 2 points: %.2f\n", solveDistance(l));

	getSlopeInterceptForm(l);

return 0;

}

