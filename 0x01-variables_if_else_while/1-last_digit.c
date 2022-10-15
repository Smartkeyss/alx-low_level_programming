#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
*/

int main(void)

{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d\n", n, x);
	if (x < 6 && x != 0)
		printf("Last digit of %d is %d\n", n, x);
	if (x == 0)
		printf("Last digit of %d is %d\n", n, x);
	return (0);
}
