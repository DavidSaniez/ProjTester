/*
** EPITECH PROJECT, 2017
** get_path.c
** File description:
** By DavidS
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "proto.h"

char *first_char(char *str)
{
	int i = 2;
	int j = 0;
	char *new = malloc(sizeof(char) * strlen(str));

	if (new == NULL)
		return (NULL);
	while (str[i]) {
		new[j] = str[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}

char **change(char **array)
{
	int i = 0;

	if (array[i][0] == '.' && array[i][1])
		array[i] = first_char(array[i]);
	if (array[i][strlen(array[i] + 2)] != '/') {
		array[i] = realloc(array[0], (strlen(array[i]) + 1));
		if (array[i] == NULL)
			return (NULL);
		array[i][strlen(array[i])] = '\0';
	}
	return (array);
}

int check_str(char *str)
{
	FILE *file;
	char *str2 = "tree ";
	char *str3 = " > tmp.txt";
	char *str4 = " -F --charset=ascii --noreport |\
	sed 's/|/-/g; s/ /-/g; s/`/-/g; s/----/-----/g'";
	char *new = calloc(1, sizeof(char) * (strlen(str2)
	+ strlen(str) + strlen (str3) + strlen(str4) + 1));

	if (new == NULL)
	return (84);
	strcat(new, "tree ");
	strcat(new, str);
	strcat(new, str4);
	strcat(new, str3);
	file = popen(new, "w");
	if (file == NULL || pclose(file) == -1)
		exit(84);
	free(new);
	return (0);
}
char **get_path(char **array)
{
	char **new = malloc(sizeof(char *) * (nb_dash(array) + 1));
	int j = 1;

	if (new == NULL)
		return (NULL);
	new[0] = array[0];
	for (int i = 1; array[i]; i++) {
		new[j] = malloc(sizeof(char) * (strlen(array[i]) + 1));
		if (new[j] == NULL)
			return (NULL);
		if (array[i][4] == '-' && array[i][5] != '-') {
			new[j] = array[i];
			j++;
		}
	}
	new[j] = NULL;
	return (new);
}
