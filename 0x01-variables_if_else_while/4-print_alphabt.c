#include <stdio.h>

/**
 * main -> input the ASCII number corresponding to the character
 * print out corresponding character
 * Return: always (0) as success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	putchar(10);

	return (0);
}





