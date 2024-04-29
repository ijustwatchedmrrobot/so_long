NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iheaders/

SOURCE = main.c map.c dfs.c images.c
OBJ = ${SOURCE:.c=.o}
PRINTF := ft_printf/libftprintf.a
GETNEXTLINE := get_next_line/*c
LIBRARY := -Lminilibx -lmlx -framework OpenGL -framework AppKit
MINILIBX := minilibx/libmlx.a


all: $(NAME)

$(NAME): $(OBJ)
	@${MAKE} -C ./ft_printf
	@${MAKE} -C ./minilibx
	@${CC} ${CFLAGS} $(SOURCE) $(GETNEXTLINE) $(PRINTF) $(LIBRARY) -o $(NAME)

clean:
	@${MAKE} -C ./ft_printf clean
	@${MAKE} -C ./minilibx clean
	rm -rf $(OBJ)

fclean: clean
	@${MAKE} -C ./ft_printf fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
