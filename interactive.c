#include "shell.h"
#include <string.h>
#include <unistd.h>

/**
 *
 *
 *
 */
int interactive_mode(void)
{
	char *buffer;
	size_t buff_size;

	buffer = malloc(60 * sizeof(char));
	if (buffer != NULL)
	{
		buff_size = sizeof(buffer);
		printf("$ ");
		scanf(" %[\n]s", buffer);
		getline(&buffer, &buff_size, stdin);
	}
	else
		return (1);
	printf("buffer is: %s", buffer);
	if (strcmp(buffer, "exit\n") == 0)
	{
		free(buffer);
		return (0);
	}
	else
		return (exec_child(&buffer, environ));
}

char **strsplit(char *str, char *delim)
{
	char *tofree;
	char *token;
	char **args;

	tofree = str;

	while ((token = strsep(&str, delim)) != NULL)
		/*TODO copy paste strcontains here and use it :)*/


	free(tofree);
}
