#include "../shell.h"
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
	char *argv[] = {"/bin/ls", NULL, "/usr/", NULL};
	pid_t child;
	int status;

	printf("Before execve\n");


	child = fork();
	if (child == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else
	{
		wait(&status);
		printf("After execve\n");
	}
	return (0);
}
