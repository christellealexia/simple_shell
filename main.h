#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

int _strlen(char *s);
char *_strcat(char *dest, char *str);
char *read_line(void);
char **arrayTokens(char *inputbuffer);
void exe_cmd(char **argv);
char *getlocation(char *command);
int _cd(char **args);
int _exit(char **args);
int (*builtinfunc[])(char**);
int _numbuiltin(void);
int _execute(char **args);

#endif
