CC   =	gcc
NAME =	octocat
SRC  =	aff_map.c 			\
		casueasy_map.c  	\
		casuhard_map.c  	\
		choix_maps.c 		\
		choix_menu.c		\
		clear_buffer.c  	\
		hardcorehard_map.c  \
		hardcoreeasy_map.c  \
		help.c 				\
		logo.c 				\
		main.c		 		\
		modecasu.c 			\
		modehard.c 			\
		movej.c 			\
		my_putchar.c 		\
		my_putstr.c  		\
		display_msg.c 		\
		my_strcmp.c  		\
		welcome.c    	
OBJ = $(SRC:%.c=%.o)
RM  = rm -f
CFLAGS = -W -Wall -Wextra -Werror

$(NAME) :	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all