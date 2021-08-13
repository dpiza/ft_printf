CFLAGS = -Wall -Wextra -Werror
CC = gcc $(CFLAGS)
LEAKCHECK = -g -fsanitize=address
RM = rm -f
NAME = libftprintf.a
DEPS = ft_printf.h

SRCS_FILES = ft_printf.c
SRCS_DIR = ./src
OBJS_DIR = ./obj

HEADERS_FILES = ft_printf.h
HEADERS = $(addprefix $(SRCS_DIR)/, $(HEADERS_FILES))

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
OBJS_FILES = ${SRCS_FILES:.c=.o}
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME) 

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

${OBJS_DIR}/%.o: $(SRCS_DIR)/%.c $(HEADERS)
	$(CC) -I ./libft -c $< -o $@

test: $(NAME) $(HEADERS)
	$(CC) $(LEAKCHECK) main.c -L. -I $(SRCS_DIR) -lftprintf
	./a.out

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all test clean fclean re