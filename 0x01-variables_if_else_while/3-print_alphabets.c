#include <stdio.h>

/**
 * main -> input ASCII number that is related to the character
 * print out it character
 * return: Always (0) success
 */

int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
