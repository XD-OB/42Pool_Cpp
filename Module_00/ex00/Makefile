# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 00:59:50 by obelouch          #+#    #+#              #
#    Updated: 2020/12/29 16:53:53 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors:
YELLOW = \033[1;33m
CYAN = \033[1;36m
RED = \033[1;31m
GREEN = \033[1;32m
EOC = \033[1;0m

# Compiler:
CC = clang++
# Executable:
EXE = megaphone
# Flags:
CFLAGS = -Wall -Wextra -Werror


all: $(EXE)

$(EXE): megaphone.o
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN)[√]$(EOC) $(EXE) Created Successfully!"

megaphone.o: megaphone.cpp
	@$(CC) -c $< $(CFLAGS) -o $@

clean:
	@rm -f megaphone.o
	@echo "$(YELLOW)Remove *.o"

fclean: clean
	@rm -f $(EXE)
	@echo "$(RED)Remove megaphone!"

re: fclean all