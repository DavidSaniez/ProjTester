/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** By DavidS
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdlib.h>
#include "proto.h"

void gestion(int ac, char **av, char **env, char *str)
{
	char **array = str_to_word_tab(str, '\n');
	char **array2 = change(array);

	(void)av;
	(void)env;
	if (ac == 2)
		display_tab(array2);
	else if (ac >= 3)
		display_args(str, ac);
	else
		exit (84);
}

int main(int ac, char **av, char **env)
{
	int fd;
	char *str;

	if ((ac < 2 || ac > 4) || opendir(av[1]) == NULL)
		return (84);
	check_str(av[1]);
	if ((fd = open("tmp.txt", O_RDONLY)) == -1)
	return (84);
	else if ((str = read_file(fd)) == NULL)
		return (84);
	gestion(ac, av, env, str);
	if (close(fd) == -1)
		return (84);
	return (0);

}
