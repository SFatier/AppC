NAME    = foundation
SRC     =	test.c\
		readLine.c\
		my_putchar.c\
		main.c\
		my_putstr.c\
		my_strlen.c\
		my_getnbr.c\
		my_put_nbr.c\
		my_strcmp.c

OBJ     = $(SRC:%.c=%.o)
CFLAGS  = -W -Werror -Wall
RM      = rm -f
$(NAME):
		gcc -c $(SRC) $(CFLAGS)
		gcc *.o -o $(NAME)
all:		$(NAME)
		$(RM) *.o
clean:
		$(RM) *.o
fclean:		clean
		$(RM) $(NAME)
re:		fclean all
