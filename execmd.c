#include "main.h"

/**
 * exe_cmd - execute the command
 * @argv: array of tokens
 */

int exe_cmd(void)
{
	char **argv = arrayTokens();
	char *command = NULL, *actual_command = NULL;
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (argv)
		{
			command = argv[0];
			actual_command = getlocation(command);
			if ((execve(actual_command, argv, NULL)) == -1)
			{
				perror("Error:");
			}
		}
	}
	else if (pid < 0)
	{
		perror("error forking");
	}
	else
	{
		do
		{
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
