#include "monty.h"

/**
 * clean_line - Reads and cleans a line from the file
 *
 * This function reads a line from the 'bus.file' and removes any trailing
 * newline characters, and trims leading whitespaces
 * @content: A pointer to a char pointer where the cleaned line will be
 * Return: A pointer to the cleaned line, or NULL if the end of the line is
 * reached
 */
char *clean_line(char **content)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (fgets(line, len, bus.file) != NULL)
	{
		n = strlen(line);
		if (n > 0 && line[n - 1] == '\n')
		{
			line[n - 1] = '\0';
		}

		while (*line != '\0' && isspace(*line))
		{
			line++;
		}

		*content = line;
	}
	else
	{
		*content = NULL;
	}

	free(line);
	return 0;
}
