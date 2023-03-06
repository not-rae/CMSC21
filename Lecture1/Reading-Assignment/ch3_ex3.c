/*ch3_ex3: Program that adds two fractions*/

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	/*ask the user for the value of two fractions*/
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1); /*"%d/%d" = numerator/denominator*/

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	/*to get the value of numerator using condition (num1*denom2) + (num2*denom1) 
		where num1, num2 are numerator and denom1, denom2 are denominator*/
	result_num = num1 * denom2 + num2 * denom1;

	/*find denominator using condition (denom1*denom2) for LCM*/
	result_denom = denom1 * denom2;

	printf("The sum is %d/%d\n", result_num, result_denom);
	/*NOTE: resulting fraction is not in lowest term*/

	return 0;
}