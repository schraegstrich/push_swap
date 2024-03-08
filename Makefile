NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 

OBJ = $(SRC:.c=.o)

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	MAKE -C ./ft_printf
	cp ft_printf/libftprintf.a $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	MAKE -C ./libft clean
	MAKE -C ./ft_printf clean
	rm -rf $(OBJ) 

fclean: clean
	MAKE fclean -C ./libft
	MAKE fclean -C ./ft_printf
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
