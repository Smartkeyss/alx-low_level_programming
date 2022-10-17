#include <stdio.h>

/**
 * main - to print combination of numbers
 * output numbers
 * Return: ALways 0 (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
			}
			if (x != 56 || x !=57)
			{
				putchar(44);
				putchar(32);
			}
			putchar(10);
		}
	}
}
