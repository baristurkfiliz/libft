SRCS = 		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strlcat.c	\
		ft_strrchr.c	\
		ft_strlcpy.c	\
		ft_strncmp.c	\
		ft_strdup.c		\
		ft_strchr.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_atoi.c				

NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))


CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

lib: $(NAME)

all: lib
	gcc main.c libft.a

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
