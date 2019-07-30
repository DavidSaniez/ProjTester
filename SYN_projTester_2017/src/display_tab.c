/*
** EPITECH PROJECT, 2017
** display_tab.c
** File description:
** By DavidS
*/

#include <stdio.h>

static int dash_pos(char *str)
{
	int i = 0;
	int pos = 0;

	while (str[i + 1] != '\0') {
		if (str[i] == '/')
			pos = i;
	i++;
	}
	return (pos);
}

static int display_tab_bis(char **tab, int i, int a)
{
	if (tab[i][a] != '/') {
		dprintf(1, "%c", tab[i][a]);
	}
	return (0);
}
int display_tab(char **tab)
{
	int i = 0;

	while (tab[i]) {
		for (int a = dash_pos(tab[i]); tab[i][a]; a++) {
			display_tab_bis(tab, i, a);
		}
		dprintf(1, "\n");
		i++;
	}
	return (0);
}
