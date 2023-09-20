#ifndef SHELL_H
#define SHELL_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ;

int non_interactive(char **argv);
int _strlen(const char *s);
int _puts(char *s);
int _putchar(char s);
int exec_child(char **args, char **env);
int interactive_mode(void);
char **strsplit(char *str, char *delim);

#endif
