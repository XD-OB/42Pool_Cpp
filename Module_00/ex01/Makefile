# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 00:59:50 by obelouch          #+#    #+#              #
#    Updated: 2020/12/25 00:59:50 by obelouch         ###   ########.fr        #
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
CFLAGS = -Wall -Wextra -Wno-used -Werror

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
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN)[√]$(EOC)     [$(NAME) Successfully Compiled!]"

$(OBJS): %.o: %.c $(HEADERS)
	@$(CC) -c $< $(CFLAGS) -o $@


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(EXE)

re: fclean all