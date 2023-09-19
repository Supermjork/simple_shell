#include "shell.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * non_interactive - non interactive mode
 *
 * Description: this when you pass a single file to the shell to execute
 * Scripts tbd
 * @av: arguments
 *
 * Return: Exit Status
 */

int non_interactive(char **args)
{
	if (access(*args, F_OK) == 0)
		return (exec_child(args, environ));
	else
		return (-1);
}
