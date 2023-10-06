#include <stdio.h>
#include "main.h"

/**
 * main - prints all argumens it recieves
 * @argc: numbers of arguments
 * @argv: array of arguments
 * return (0);
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
