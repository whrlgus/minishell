NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.

SRCS = ft_bzero.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnew.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_toupper.c\


OBJS = $(SRCS:%.c=%.o)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
