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

# Compiler:
CC = g++
# Executable:
EXE = megaphone
# Flags:
CFLAGS = -Wall -Wextra -Werror


all: megaphone.o
	$(CC) $(CFLAGS) $@ -o $(EXE)

megaphone.o:
	$(CC) $(CFLAGS) -c megaphone.cpp

clean:
	rm -f megaphone.o

fclean: clean
	rm -f $(EXE)

re: fclean all