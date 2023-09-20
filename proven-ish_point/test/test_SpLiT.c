#include "../shell.h"
#include <stdio.h>

int main(void)
{
	char *str = "sugma balls reeeeeeee";
	char **aids;

	aids = strsplit(str, " ");

	printf("%s", *(aids + 1));

	return (0);
}
