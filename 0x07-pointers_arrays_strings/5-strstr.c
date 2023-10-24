#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: function parameter
  *
  * @haystack: function parameter
  *
  * Return: Always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}


Task 6

#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; k++)
	{
	for (r = 0; r < 8; r++)
	_putchar(a[k][r]);
	_putchar('\n');
		}
		}

