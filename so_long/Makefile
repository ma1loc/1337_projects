CC= cc

CFLAGS= -Wall -Wextra -Werror

RM= rm -rf

NAME= so_long

SRC= src_so_long/so_long.c libft/ft_putstr_fd.c  libft/ft_strncmp.c map_parsing/map_parsing.c \
	libft/ft_strlen.c libft/ft_strnstr.c libft/ft_perror.c libft/ft_strdup.c libft/ft_strchar.c \
	libft/ft_substr.c map_parsing/get_next_line.c map_parsing/is_valid_file.c map_parsing/is_valid_map.c \
	map_parsing/memory_mang.c map_rendring/render_the_map.c map_rendring/movements.c \
	map_rendring/load_images.c map_rendring/rendering_utils.c map_parsing/map_parsing_utils.c \
	libft/ft_itoa.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c \
	ft_printf/ft_puthex.c ft_printf/ft_putadd.c ft_printf/ft_putuint.c 

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re

.SECONDARY: $(OBJ)