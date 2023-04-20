#define buffersize 1024
#include "main.h"
char *read_line(void)
{
	int buff = buffersize;
	int position = 0;
	char *buffer = malloc(sizeof(char)*buff);
	int c;

	if (!buffer)
	{
		fprintf(stderr,"lsh: allocation error\n");
		exit(EXIT);
	}
	while (1)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			buffer[position] = '\0';
			return buffer;
		}
		else
		{
			buffer[position] = c;
		}
			position++;
	}
}
