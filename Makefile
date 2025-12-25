# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvlho <jvlho@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 13:07:33 by jsouza            #+#    #+#              #
#    Updated: 2025/12/25 12:37:42 by jvlho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@$(MAKE) -C printf
	@$(MAKE) -C fprintf
	cc -Wall -Wextra -Werror -g -c src/*.c operations/*.c
	cc -Wall -Wextra -Werror -g *.o printf/libftprintf.a fprintf/libftfprintf.a
	rm -f *.o

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
	cc -Wall -Wextra -Werror -g -c src/*.c operations/*.c
	cc -Wall -Wextra -Werror -g *.o printf/libftprintf.a fprintf/libftfprintf.a
	rm -f *.o

.PHONY: all clean fclean re test