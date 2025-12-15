# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 17:16:47 by jsouza            #+#    #+#              #
#    Updated: 2025/12/15 11:28:54 by jsouza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB_DIR = ../libft

CC = cc -Wall -Wextra -Werror -I .

AR = ar rcs

SRC = ft_printf_utils.c ft_printf.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

LIB_OBJ = $(LIB_DIR)/obj/ft_atoi.o \
	$(LIB_DIR)/obj/ft_bzero.o \
	$(LIB_DIR)/obj/ft_calloc.o \
	$(LIB_DIR)/obj/ft_isalnum.o \
	$(LIB_DIR)/obj/ft_isalpha.o \
	$(LIB_DIR)/obj/ft_isascii.o \
	$(LIB_DIR)/obj/ft_isdigit.o \
	$(LIB_DIR)/obj/ft_isprint.o \
	$(LIB_DIR)/obj/ft_itoa.o \
	$(LIB_DIR)/obj/ft_lstadd_back_bonus.o \
	$(LIB_DIR)/obj/ft_lstadd_front_bonus.o \
	$(LIB_DIR)/obj/ft_lstclear_bonus.o \
	$(LIB_DIR)/obj/ft_lstdelone_bonus.o \
	$(LIB_DIR)/obj/ft_lstiter_bonus.o \
	$(LIB_DIR)/obj/ft_lstlast_bonus.o \
	$(LIB_DIR)/obj/ft_lstmap_bonus.o \
	$(LIB_DIR)/obj/ft_lstnew_bonus.o \
	$(LIB_DIR)/obj/ft_lstsize_bonus.o \
	$(LIB_DIR)/obj/ft_memchr.o \
	$(LIB_DIR)/obj/ft_memcmp.o \
	$(LIB_DIR)/obj/ft_memcpy.o \
	$(LIB_DIR)/obj/ft_memmove.o \
	$(LIB_DIR)/obj/ft_memset.o \
	$(LIB_DIR)/obj/ft_putchar_fd.o \
	$(LIB_DIR)/obj/ft_putendl_fd.o \
	$(LIB_DIR)/obj/ft_putnbr_fd.o \
	$(LIB_DIR)/obj/ft_putstr_fd.o \
	$(LIB_DIR)/obj/ft_split.o \
	$(LIB_DIR)/obj/ft_strchr.o \
	$(LIB_DIR)/obj/ft_strdup.o \
	$(LIB_DIR)/obj/ft_striteri.o \
	$(LIB_DIR)/obj/ft_strjoin.o \
	$(LIB_DIR)/obj/ft_strlcat.o \
	$(LIB_DIR)/obj/ft_strlcpy.o \
	$(LIB_DIR)/obj/ft_strlen.o \
	$(LIB_DIR)/obj/ft_strmapi.o \
	$(LIB_DIR)/obj/ft_strncmp.o \
	$(LIB_DIR)/obj/ft_strnstr.o \
	$(LIB_DIR)/obj/ft_strrchr.o \
	$(LIB_DIR)/obj/ft_strtrim.o \
	$(LIB_DIR)/obj/ft_substr.o \
	$(LIB_DIR)/obj/ft_tolower.o \
	$(LIB_DIR)/obj/ft_toupper.o

OBJ_DIR = obj

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIB_DIR)
	@$(AR) $(NAME) $(OBJ) $(LIB_OBJ)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) -c $< -o $@

clean:
	@$(MAKE) clean -C $(LIB_DIR)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) fclean -C $(LIB_DIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re