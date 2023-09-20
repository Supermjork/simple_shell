#include "shell.h"
#include "sys/wait.h"

/**
 * exec_child - exec this child
 * @args: le arguments
 * @env: environment
 * Return: exit status of child
 */
int exec_child(char **args, char **env)
{
	if (execve(*(args + 1), args + 1, env) == -1)
	{
		perror("hsh");
		return (-1);
	}
	return (0);
}
