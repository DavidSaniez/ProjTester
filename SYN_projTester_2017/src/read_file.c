/*
** EPITECH PROJECT, 2017
** read_file.c
** File description:
** By DavidS
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "proto.h"

char *read_file(int fd)
{
	char *buffer = malloc(sizeof(char));
	char c;
	int i = 0;

	if (buffer == NULL)
		return (NULL);
	while (read(fd, &c, 1) > 0) {
		buffer[i] = c;
		i++;
		buffer = realloc(buffer, ((i + 2) * sizeof(char)));
		if (buffer == NULL)
			return (NULL);
		}
	buffer[i] = '\0';
	return (buffer);
}
