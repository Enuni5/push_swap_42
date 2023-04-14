SRC = 

OBJS = ${SRC:.c=.o}

NAME = push_swap

#BONUS DEFINITIONS#

SRC_BONUS = ./src_bonus/server_bonus.c

OBJS_BONUS = ${SRC_BONUS:.c=.o}

NAME_BONUS = server_bonus

#COMPILATION UTILS#

LIBRARY = libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

#RULES#

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:  norminette libft compile

norminette: 
	@echo "\n *** CHECKING 42 NORMINETTE ***\n"
	@norminette src/
	@norminette src_bonus/

libft: 
	@echo "\n *** COMPILING LIBFT ***\n"
	@${MAKE} -C libft

compile: ${NAME}

$(NAME): ${OBJS}
	@echo "\n *** COMPILING PUSH-SWAP ***\n"
	@${CC} ${OBJS} ${LIBRARY} -o ${NAME}


#BONUS RULES#

bonus: norminette libft compile_bonus

compile_bonus: ${NAME_BONUS} 

$(NAME_BONUS): ${OBJS_BONUS}
	@echo "\n *** COMPILING PUSH_SWAP BONUS ***\n"
	@${CC} ${OBJS_BONUS} ${LIBRARY} -o ${NAME}

#CLEAN RULES#

clean:
	@${MAKE} -C libft clean
	@${RM} ${OBJS}
	@${RM} ${OBJS_BONUS}

fclean: clean
	@${MAKE} -C libft fclean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re libft compile norminette