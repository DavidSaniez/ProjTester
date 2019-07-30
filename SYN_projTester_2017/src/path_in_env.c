/*
** EPITECH PROJECT, 2017
** path_in_env.c
** File description:
** By DavidS
*/

#include <stdlib.h>
#include <string.h>
#include "proto.h"

static char **path_in_env_bis(char **env, char **array, int i, int j)
{
	if (strncmp(env[i], "PATH", j - 1) == 0) {
		array = str_to_word_tab(&env[i][j + 1], ':');
		return (array);
	}
	return (NULL);
}

char **path_in_env(char **env)
{
	char **array = NULL;
	int j = 0;

	for (int i = 0; env[i]; i++) {
		while (env[i][j] != '=')
			j++;
		path_in_env_bis(env, array, i, j);
		j = 0;
	}
	return (NULL);
}
