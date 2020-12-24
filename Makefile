NAME = minishell

SRCDIR = ./src/
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.c")
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
INC = ./inc/
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))

LIBDIR = ./libft/
LIBFT = ./libft/libft.a
LIBINC = ./libft/

CC = gcc
CFLAGS = -Wall -Werror -Wextra

DEBUG = -g

all: $(BUILDDIR) $(LIBFT) $(NAME)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

$(NAME): $(BUILDOBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBDIR)

clean:
	rm -rf $(BUILDDIR)
	make -C $(LIBDIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBDIR) fclean

re: fclean all

.PHONY: all fclean clean re
