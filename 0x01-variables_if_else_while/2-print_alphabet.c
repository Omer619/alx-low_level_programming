#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entery point
 * Return: Result 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
