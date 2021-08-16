CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a
DEPS = libft.h

SRCS_DIR = ./src
OBJS_DIR = ./obj

SRCS_FILES = ft_strncmp.c ft_memcpy.c ft_memchr.c ft_atoi.c ft_isascii.c ft_strnstr.c ft_tolower.c ft_memccpy.c \
			ft_calloc.c ft_toupper.c ft_strdup.c ft_isalpha.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_isalnum.c \
			ft_isprint.c ft_isdigit.c ft_memset.c ft_memcmp.c ft_strlen.c ft_strlcat.c ft_memmove.c ft_strlcpy.c \
			ft_isspace.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putnbr_base.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

OBJS_FILES = $(SRCS_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(DEPS)
	$(CC) $(FLAGS) -I ./ -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	rmdir $(OBJS_DIR)

re: fclean all

.PHONY:	all clean fclean re