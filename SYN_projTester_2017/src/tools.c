/*
** EPITECH PROJECT, 2017
** tools.c
** File description:
** By DavidS
*/

#include "proto.h"

int strlen_array(char **array)
{
	int i = 0;

	while (array[i])
		i++;
	return (i);
}

int nb_dash(char **array)
{
	int nb = 0;
	for (int i = 0; array[i]; i++)
		if (array[i][4] == '-' && array[i][5] != '-')
			nb++;
	return (nb);
}
