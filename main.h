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
void exe_cmd(char **argv);
char *getlocation(char *command);

#endif
