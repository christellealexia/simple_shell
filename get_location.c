#include "main.h"

/**
 * getlocation - get the PATH for the command
 * @command: command
 */

char *getlocation(char *command)
{
	char *path, *path_cpy, *path_token, *path_name;
	struct stat buffer;
	int command_len, token_len;

	path = getenv("PATH");
	if (path)
	{
		path_cpy = strdup(path);
		command_len = _strlen(command);
		path_token = strtok(path_cpy, ":");
		while (path_token != NULL)
		{
			token_len = _strlen(path_token);
			path_name = malloc(token_len + command_len + 2);
			strcpy(path_name, path_token);
			strcat(path_name, "/");
			strcat(path_name, command);
			strcat(path_name, "\0");
			if ((stat(path_name, &buffer)) == 0)
			{
				free(path_cpy);
				return (path_name);
			}
			else
			{
				free(path_name);
				path_token = strtok(NULL, ":");
			}
		}
		free(path_cpy);
		if ((stat(command, &buffer)) == 0)
		{
			return (command);
		}
		return (NULL);
	}
	return (NULL);
}

