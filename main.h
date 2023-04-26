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
char _strdup(char *str);
char *_strcat(char *dest, char *str);
char *read_line(void);
char **arrayTokens(void);
int exe_cmd(void);
char *getlocation(char *command);
int _cd(char **args);
int our_exit(char **args);
int (*builtinfunc[2])(char**);
int _numbuiltin(void);
int _execute(char **args);

#endif
