CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = sum_numbers.c print_numbers.c main.c
OBJ = $(SRC:.c=.o)
NAME = a.out

all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) -o $@

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
