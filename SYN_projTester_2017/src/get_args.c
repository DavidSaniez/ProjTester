/*
** EPITECH PROJECT, 2017
** get_args.c
** File description:
** By DavidS
*/

#include <string.h>
#include <stdio.h>
#include "proto.h"

// static int get_ext(char *str)
// {
// 	size_t size;
// 	FILE *file;
// 	char *new = NULL;
//
// 	if (strcmp(str, "tdf") == 0) {
// 		file = fopen(str, "r");
// 		getline(&new, &size, file);
// 	}
// 	printf("%s\n", new);
// 	return (0);
// }

int check_path(char *str)
{
	int i = strlen(str);

	while (str[i] != '.' && i >= 0) {
		i--;
		if (strcmp(str, "tdf") == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}

char *display_args(char *str, int ac)
{
	size_t size;
	FILE *file;
	char *new = NULL;

	if (ac >= 3 && (check_path(str) == 0)) {
		printf("str = %s\n", str);
		file = fopen(str, "r");
		getline(&new, &size, file);
		printf("%s\n", new);
		}
	return (NULL);
}
