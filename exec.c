#include "shell.h"

/**
 * exec_child: exec this
 * @args: le arguments
 * @env: environment
 * Return: exit status of child
 */
int exec_child(char **args, char **env)
{
	pid_t child;

	child = fork();
	if (child == 0)
	{
		if (execve(*args, args, env) == -1)
			perror("hsh");
	}
}
