#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int _strlen(char *s);
void exe_cmd(char **argv);
char *getlocation(char *command);

#endif
