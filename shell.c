#include "shell.h"

/**
 * main - core of the shell
 *
 * @argc: Number of Argooments
 * @argv: Argooments
 *
 * Return: exit status
 */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return (non_interactive(argv));
	}

	return (0);
}
