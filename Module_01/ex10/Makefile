# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/02 04:06:50 by obelouch          #+#    #+#              #
#    Updated: 2021/01/02 14:33:16 by obelouch         ###   ########.fr        #
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
EXE = cato9tails

# Name of files
CAT = main cato9tails

# Sources:
SRCS = $(addsuffix .cpp, $(CAT))

# Objects:
OBJS = $(addsuffix .o, $(CAT))

# Headers:
HEADERS = cato9tails.hpp


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
	@echo "$(RED)Remove ./$(EXE)!"

re: fclean all