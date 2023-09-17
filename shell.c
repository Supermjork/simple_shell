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
	if (argc < 2)
		return (0);

	child_pid = fork();
	if (child_pid == -1)
	{
        perror("Error:");
		return (1);
	}
	if (child_pid == 0)
    {
		if (execve(argv[0], argv + 1, NULL) == -1)
		{
			perror("Error:");
			return (-1);
		}
	}
	else
		wait(&status);
	return (0);
}
