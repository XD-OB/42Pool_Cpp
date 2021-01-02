# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/01 22:14:50 by obelouch          #+#    #+#              #
#    Updated: 2021/01/01 22:16:39 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors:
YELLOW = \033[1;33m
CYAN = \033[1;36m
RED = \033[1;31m
GREEN = \033[1;32m
EOC = \033[1;0m

# Compiler:
CC = g++

# Flags:
CFLAGS = -Wall -Wextra -Werror

# Executable:
EXE = replace

# Name of files
PHONEBOOK = main replace

# Sources:
SRCS = $(addsuffix .cpp, $(PHONEBOOK))

# Objects:
OBJS = $(addsuffix .o, $(PHONEBOOK))

# Headers:
HEADERS = replace.hpp


all: $(EXE)	

$(EXE): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN)[√]$(EOC) $(EXE) Created Successfully!"

$(OBJS): %.o: %.cpp $(HEADERS)
	@$(CC) -c $< $(CFLAGS) -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)Remove *.o"

fclean: clean
	@rm -f $(EXE)
	@echo "$(RED)Remove ./replace!"

re: fclean all