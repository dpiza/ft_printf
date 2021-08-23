SRCS_DIR = ./src
OBJS_DIR = ./obj
LIBFT_DIR = ./libft

CFLAGS = -Wall -Wextra -Werror
LEAKCHECK = -g -fsanitize=address
CC = gcc $(CFLAGS)
RM = rm -f

NAME = libftprintf.a

SRCS_FILES = ft_printf.c flag_parse.c format_string.c format_nbr_string.c
SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

HEADERS_FILES = ft_printf.h
HEADERS = $(addprefix $(SRCS_DIR)/, $(HEADERS_FILES))


OBJS_FILES = ${SRCS_FILES:.c=.o}
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME) 

$(NAME): $(LIBFT) $(OBJS_DIR) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

${OBJS_DIR}/%.o: $(SRCS_DIR)/%.c $(HEADERS)
	$(CC) -I./libft -I./src -c $< -o $@

test: $(NAME) $(HEADERS)
	$(CC) $(LEAKCHECK) main.c -L. -I $(SRCS_DIR) -lftprintf
	./a.out

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)
	rmdir $(OBJS_DIR)

re: fclean all

.PHONY:	all test clean fclean re bonus