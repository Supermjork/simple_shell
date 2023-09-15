#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int non_interactive(char **argv);
extern char **environ;
#endif
