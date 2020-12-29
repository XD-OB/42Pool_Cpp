# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 00:59:50 by obelouch          #+#    #+#              #
#    Updated: 2020/12/29 16:55:34 by obelouch         ###   ########.fr        #
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

# Flags:
CFLAGS = -Wall -Wextra -Werror

# Executable:
EXE = nul_phonebook

# Name of files
PHONEBOOK = main Phonebook.class Contact.class

# Sources:
SRCS = $(addsuffix .cpp, $(PHONEBOOK))

# Objects:
OBJS = $(addsuffix .o, $(PHONEBOOK))

# Headers:
HEADERS = Phonebook.class.hpp Contact.class.hpp


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
	@echo "$(RED)Remove megaphone!"

re: fclean all