##
## Makefile for Makefile in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ
## 
## Made by DORIAN DEBOUT
## Login   <DoWdoX@epitech.net>
## 
## Started on  Sat Dec  3 10:16:33 2016 DORIAN DEBOUT
## Last update Fri May  5 18:04:04 2017 DORIAN DEBOUT
##

NAME	=	bsq

SRCS	=	main.c			\
		str_to_wordtab.c	\
		transfo.c		\
		check_char.c		\
		parsing.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -L. -lmy

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
