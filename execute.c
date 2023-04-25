#include "main.h"

char *builtin_str[] = {
	"cd",
	"exit",
};
int (*builtinfunc[])(char **) = {
	&_cd,
	&our_exit,
};
int _numbuiltins()
{
	return sizeof(builtin_str) / sizeof(char *);
}
/**
 * _cd - change directory
 * @argv: array of tokens
 * Return: integer
 */
int _cd(char **argv)
{
	if (argv[1] == NULL)
	{
		fprintf(stderr, "cd: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(argv[1]) != 0)
		{
			perror("cd");
		}
	}
	return 1;
}
int our_exit(char **argv)
{
	return (0);
}
/**
 * _execute - execute builtin commands
 * @argv: array of tokens
 * Return: an int
 */
int _execute(char **argv)
{
	int i;
	if (argv[0] == NULL)
	{
		/* empty command */
		return 1;
	}
	for (i = 0; i < _numbuiltins(); i++)
	{
		if (strcmp(argv[0], builtin_str[i]) == 0)
		{
			return (*builtinfunc[i])(argv);
		}
	}
	return exe_cmd(argv);
}
