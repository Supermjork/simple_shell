#include "shell.h"

/**
 * shell - BIG MAN
 *
 * @argc: Number of Argooments
 * @argv: Argooments
 * @env: Environment thang
 *
 * Return: Death
 */

int shell(int argc, char **argv, char **env)
{
	if (argc == 1)
	{
		non_interactive(argv);
	}

	return (0);
}
