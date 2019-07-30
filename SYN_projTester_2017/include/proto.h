/*
** EPITECH PROJECT, 2017
** proto.h
** File description:
** proto.h
*/

#ifndef PROTO_H_
#define PROTO_H_

char *read_file(int fd);
int nb_dash(char **tab);
char **get_path(char **array);
char **str_to_word_tab(char const *str, char s);
int display_tab(char **tab);
int check_str(char *str);
int strlen_array(char **array);
void gestion(int ac, char **av, char **env, char *str);
char **change(char **array);
char *first_char(char *str);
int print_without_dash(char *str);
char **path_in_env(char **env);
char *display_args(char *str, int ac);
int check_path(char *str);

#endif /*\ PROTO_H_ \*/
