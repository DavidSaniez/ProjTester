##
## EPITECH PROJECT, 2018
## stumper6 makefile
## File description:
## makefile
##

NAME	=	projTester

SRC	=	src/tools.c			\
		src/read_file.c			\
		src/display_tab.c		\
		src/get_path.c			\
		src/str_to_word_tab.c		\
		src/main.c			\
		src/path_in_env.c		\
		src/get_args.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-ggdb3 -W -Wall -Wextra -Iinclude/

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
