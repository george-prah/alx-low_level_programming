#include "main.h"

/**
 *  main - Prints _putchar as a message.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[]= "_putchar";
	int	i;
	
	for (i = 0; i <= 7; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
