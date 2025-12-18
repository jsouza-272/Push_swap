# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 13:07:33 by jsouza            #+#    #+#              #
#    Updated: 2025/12/17 16:51:11 by jsouza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@$(MAKE) -C printf
	@$(MAKE) -C fprintf

clean:
	@$(MAKE) clean -C printf
	@$(MAKE) clean -C fprintf

fclean:
	@$(MAKE) fclean -C printf
	@$(MAKE) fclean -C fprintf

re:
	@$(MAKE) re -C printf
	@$(MAKE) re -C fprintf

test: re
	cc -Wall -Wextra -Werror src/checker_utils.c src/checker.c src/stack_init.c src/.main.c printf/libftprintf.a fprintf/libftfprintf.a

test2: re
	cc -Wall -Wextra -Werror src/*.c printf/libftprintf.a fprintf/libftfprintf.a operations/*.c

.PHONY: all clean fclean re test