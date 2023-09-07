CC = gcc
FLAGS = -Wall -Werror -Wextra -I./includes
AR = ar crs
RM = rm -rf
FILES = ft_putchar ft_strcmp ft_putstr ft_swap ft_strlen
SRC = $(addprefix srcs/, $(addsuffix .c, $(FILES)))
OBJ = $(addsuffix .o, $(FILES))
LIB = libft.a

.PHONY: all clean fclean re

all: $(LIB)

$(LIB): $(OBJ)
	@echo "Creating library: $(LIB)"
	$(AR) $(LIB) $(OBJ)

%.o: srcs/%.c
	@echo "Compiling $<"
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "Cleaning objects"
	$(RM) $(OBJ)

fclean: clean
	@echo "Cleaning library: $(LIB)"
	$(RM) $(LIB)

re: fclean all

# This rule will compile everything when you run `make` or `make all`
# You can also use `make libft.a` to explicitly compile the library
lib: $(LIB)
