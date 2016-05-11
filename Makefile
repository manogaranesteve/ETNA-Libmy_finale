##
## Makefile for  in /Users/stevemanogarane/Libmy/manoga_s/libmy_finale
## 
## Made by MANOGARANE Steve »
## Login   <manoga_s »@etna-alternance.net>
## 
## Started on  Mon Apr 18 12:45:13 2016 MANOGARANE Steve »
## Last update Mon Apr 18 12:45:21 2016 MANOGARANE Steve »
##

NAME	=	libmy.a
SRC	=	my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_strdup.c \
		my_str_to_wordtab.c

OBJ	=	$(SRC:%.c=%.o)

RM	=	rm -f

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

all:		$(NAME)

re:		fclean all