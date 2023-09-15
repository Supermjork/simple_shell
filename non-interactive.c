#include "shell.h"

/**
 * non_interactive - non interactive mode
 *
 * Description: this when you pass a single file to the shell to execute
 * Scripts tbd
 * @av: arguments
 *
 * Return: Exit Status
 */

int non_interactive(char **av)
{
	if (access(*av, F_OK) == -1)
	{
		/* cannot open <file>: No such file */
		_puts("sh: 0: cannot open ");
		_puts(*av);
		_puts(": No such file");
		return(-1);
	}

	if (access(*av, X_OK) == -1)
	{
		/* permission denied */
		_puts("sh: 0: cannot open ");
		_puts(*av);
		_puts(": permission denied");
		return(-1);
	}
	if (access(*av, F_OK || X_OK) == 0)
	{
		execv(*av, (av + 1));
	}
	return (0);
}
