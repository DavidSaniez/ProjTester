/*
** EPITECH PROJECT, 2018
** ProjTester
** File description:
** requirement.c
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_ps_synthesis(void)
{
	pid_t child = fork();
	char *av[2] = {"ps", NULL};

	if (child == 0) {
		execv("/bin/ps", av);
	} else if (child > 0)
		wait(NULL);
}
