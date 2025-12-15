#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : jsouza < jsouza @student .42lisboa.com> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2025 / 10 / 17 09 : 56 : 22 by jsouza # + # # + # #
#Updated : 2025 / 10 / 29 16 : 10 : 48 by jsouza## # ########.fr #
# #
#**************************************************************************** #

CC = cc -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c


OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(OBJ)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) -I . -c $< -o $@
	
clean:
	@rm -rf $(OBJ_DIR)

fclean: clean

re: fclean all

.PHONY: all clean fclean re