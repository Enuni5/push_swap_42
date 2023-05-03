SRC = src/main.c src/memory.c src/error.c \
	src/stacks.c src/check.c src/push.c \
	src/rotate.c src/swap.c src/sort.c \
	src/bubble.c src/short_sort.c src/radix.c \
	src/utils.c

OBJS = ${SRC:.c=.o}

NAME = push_swap

#BONUS DEFINITIONS#

SRC_BONUS = 

OBJS_BONUS = ${SRC_BONUS:.c=.o}

NAME_BONUS = 

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