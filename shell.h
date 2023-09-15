#ifndef SHELL_H
#define SHELL_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ;
int non_interactive(char **argv);

#endif
