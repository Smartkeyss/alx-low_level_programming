#include <stdio.h>

/**
 * main - input ASCII value of numbers 
 * output numbers with comma and space
 * Return: Always 0 (successs)
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
