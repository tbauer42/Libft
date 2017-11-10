NAME = libft.a

SRC = ft_strlen.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@gcc $(CFLAGS) -c $(SRC) -I ./includes
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "libt rdy"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "suppression des .o"

fclean: clean
	@rm -f $(NAME)
	@echo "supression du .a"

re: fclean all
