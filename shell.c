#include "shell.h"
#include "sys/wait.h"

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

	pid_t child_pid;
	int status;
	if (argc == 1)
	{
		/* TODO make interactive */
		return (0);
	}
	else
	{
	child_pid = fork();
	if (child_pid == -1)
	{
        perror("hsh");
		return (1);
	}
	if (child_pid == 0)
		exec_child(argv, environ);
	else
		wait(&status);
	}

	return (0);
}
