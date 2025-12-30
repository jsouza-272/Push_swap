# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 13:07:33 by jsouza            #+#    #+#              #
#    Updated: 2025/12/30 16:09:39 by jsouza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COMPILERS
FLAGS = -Wall -Wextra -Werror -g
COMPILER = cc
AR = ar rcs

#NAME
PROGRAM = push_swap
BONUS = checker
BONUS_OPERATIONS = bonus_operations.a
UTILS = utils.a
OPERATIONS = operations.a
LIB_NAME = libft.a
PRINTF = printf.a
FPRINTF = fprintf.a
GNL = get_next_line.a

#PATH
PROGRAM_PATH = push_swap_src
BONUS_PATH = checker_dir/src
BONUS_OPERATIONS_PATH = checker_dir/operations_checker
UTILS_PATH = push_swap_src
OPERATIONS_PATH = operations
LIB_PATH = libft
PRINTF_PATH = printf
FPRINTF_PATH = fprintf
GNL_PATH = get_next_line
OBJ_DIR = obj

#SRCS
PROGRAM_SRC = $(PROGRAM_PATH)/main.c

BONUS_SRC = $(BONUS_PATH)/checker.c $(BONUS_PATH)/checker_utils.c

BONUS_OPERATIONS_SRC = $(BONUS_OPERATIONS_PATH)/checker_swap.c $(BONUS_OPERATIONS_PATH)/checker_push.c \
		$(BONUS_OPERATIONS_PATH)/checker_reverse_rotate.c $(BONUS_OPERATIONS_PATH)/checker_rotate.c

UTILS_SRC = $(UTILS_PATH)/checker_utils.c $(UTILS_PATH)/checker.c $(UTILS_PATH)/stack_init.c \
		$(UTILS_PATH)/chunk_index.c $(UTILS_PATH)/chunk.c $(UTILS_PATH)/chunk_utils.c \
		$(UTILS_PATH)/chunk_utils2.c $(UTILS_PATH)/simple_sort.c $(UTILS_PATH)/sort_last_chunk.c

OPERATIONS_SRC = $(OPERATIONS_PATH)/reverse_rotate.c $(OPERATIONS_PATH)/push.c $(OPERATIONS_PATH)/swap.c \
			$(OPERATIONS_PATH)/rotate.c $(OPERATIONS_PATH)/index_swap.c $(OPERATIONS_PATH)/index_rotate.c \
			$(OPERATIONS_PATH)/index_reverse_rotate.c $(OPERATIONS_PATH)/index_push.c

LIB_SRC = $(LIB_PATH)/ft_atoi.c $(LIB_PATH)/ft_bzero.c \
		$(LIB_PATH)/ft_calloc.c $(LIB_PATH)/ft_isalnum.c \
		$(LIB_PATH)/ft_isalpha.c $(LIB_PATH)/ft_isascii.c \
		$(LIB_PATH)/ft_isdigit.c $(LIB_PATH)/ft_isprint.c \
		$(LIB_PATH)/ft_itoa.c $(LIB_PATH)/ft_lstadd_back_bonus.c \
		$(LIB_PATH)/ft_lstadd_front_bonus.c $(LIB_PATH)/ft_lstclear_bonus.c \
		$(LIB_PATH)/ft_lstdelone_bonus.c $(LIB_PATH)/ft_lstiter_bonus.c \
		$(LIB_PATH)/ft_lstlast_bonus.c $(LIB_PATH)/ft_lstmap_bonus.c \
		$(LIB_PATH)/ft_lstnew_bonus.c $(LIB_PATH)/ft_lstsize_bonus.c \
		$(LIB_PATH)/ft_memcmp.c $(LIB_PATH)/ft_memcpy.c \
		$(LIB_PATH)/ft_memmove.c $(LIB_PATH)/ft_memset.c \
		$(LIB_PATH)/ft_putnbr_fd.c $(LIB_PATH)/ft_putstr_fd.c \
		$(LIB_PATH)/ft_split.c $(LIB_PATH)/ft_strchr.c \
		$(LIB_PATH)/ft_strdup.c $(LIB_PATH)/ft_striteri.c \
		$(LIB_PATH)/ft_strjoin.c $(LIB_PATH)/ft_strlcat.c \
		$(LIB_PATH)/ft_strlcpy.c $(LIB_PATH)/ft_strlen.c \
		$(LIB_PATH)/ft_strmapi.c $(LIB_PATH)/ft_strncmp.c \
		$(LIB_PATH)/ft_strnstr.c $(LIB_PATH)/ft_strrchr.c \
		$(LIB_PATH)/ft_strtrim.c $(LIB_PATH)/ft_substr.c \
		$(LIB_PATH)/ft_tolower.c $(LIB_PATH)/ft_toupper.c \
		$(LIB_PATH)/ft_memchr.c $(LIB_PATH)/ft_putchar_fd.c \
		$(LIB_PATH)/ft_putendl_fd.c $(LIB_PATH)/ft_atol.c \
		$(LIB_PATH)/ft_isspace.c $(LIB_PATH)/ft_issignal.c

PRINTF_SRC = $(PRINTF_PATH)/ft_printf.c $(PRINTF_PATH)/ft_printf_utils.c

FPRINTF_SRC = $(FPRINTF_PATH)/ft_fprintf_utils.c $(FPRINTF_PATH)/ft_fprintf.c

GNL_SRC = $(GNL_PATH)/get_next_line.c $(GNL_PATH)/get_next_line_utils.c

#OBJ
OBJ = $(addprefix $(OBJ_DIR)/, $(PROGRAM_SRC:.c=.o) $(UTILS_SRC:.c=.o) $(OPERATIONS_SRC:.c=.o) $(LIB_SRC:.c=.o) $(PRINTF_SRC:.c=.o) $(FPRINTF_SRC:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(BONUS_SRC:.c=.o) $(GNL_SRC:.c=.o) $(BONUS_OPERATIONS_SRC:.c=.o))
BONUS_OPERATIONS_OBJ = $(addprefix $(OBJ_DIR)/, $(BONUS_OPERATIONS_SRC:.c=.o))
PROGRAM_OBJ = $(addprefix $(OBJ_DIR)/, $(PROGRAM_SRC:.c=.o) )
BONUS_OBJ = $(addprefix $(OBJ_DIR)/, $(BONUS_SRC:.c=.o))
UTILS_OBJ = $(addprefix $(OBJ_DIR)/, $(UTILS_SRC:.c=.o))
OPERATIONS_OBJ = $(addprefix $(OBJ_DIR)/, $(OPERATIONS_SRC:.c=.o))
LIB_OBJ = $(addprefix $(OBJ_DIR)/, $(LIB_SRC:.c=.o))
PRINTF_OBJ = $(addprefix $(OBJ_DIR)/, $(PRINTF_SRC:.c=.o))
FPRINTF_OBJ = $(addprefix $(OBJ_DIR)/, $(FPRINTF_SRC:.c=.o))
GNL_OBJ = $(addprefix $(OBJ_DIR)/, $(GNL_SRC:.c=.o))

#RULES
all: $(PROGRAM)

$(PROGRAM): $(OBJ) $(UTILS) $(OPERATIONS) $(LIB_NAME) $(PRINTF) $(FPRINTF)
	@$(COMPILER) -I . $(PROGRAM_OBJ) $(UTILS) $(OPERATIONS) $(LIB_NAME) $(PRINTF) $(FPRINTF) -o $(PROGRAM)
	@mv $(UTILS) $(OPERATIONS) $(LIB_NAME) $(PRINTF) $(FPRINTF) $(OBJ_DIR)/

$(UTILS): $(OBJ)
	@$(AR) $(UTILS) $(UTILS_OBJ)

$(OPERATIONS): $(OBJ)
	@$(AR) $(OPERATIONS) $(OPERATIONS_OBJ)

$(LIB_NAME): $(OBJ)
	@$(AR) $(LIB_NAME) $(LIB_OBJ)

$(PRINTF): $(OBJ)
	@$(AR) $(PRINTF) $(PRINTF_OBJ) $(LIB_OBJ)

$(FPRINTF): $(OBJ)
	@$(AR) $(FPRINTF) $(FPRINTF_OBJ) $(LIB_OBJ)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(COMPILER) $(FLAGS) -I . -c $< -o $@

bonus: all $(BONUS)
	
$(BONUS): $(OBJ_BONUS) $(GNL) $(BONUS_OPERATIONS)
	@$(COMPILER) -I . $(OBJ_BONUS) $(BONUS_OPERATIONS) $(GNL) $(addprefix $(OBJ_DIR)/, $(UTILS) $(OPERATIONS) $(LIB_NAME) $(PRINTF) $(FPRINTF)) -o $(BONUS)
	@mv $(GNL) $(BONUS_OPERATIONS) $(OBJ_DIR)/

$(GNL): $(OBJ_BONUS)
	@$(AR) $(GNL) $(GNL_OBJ)

$(BONUS_OPERATIONS): $(OBJ_BONUS)
	@$(AR) $(BONUS_OPERATIONS) $(BONUS_OPERATIONS_OBJ)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(PROGRAM)
	@rm -f $(BONUS)

re: fclean all

.PHONY: all bonus clean fclean re