/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 00:11:27 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 00:11:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
**  PROGRAM
**      Displays the command line arguments passed in uppercase.
*/

void    print_upperStr(char *str) {

    int     i = 0;
    while (str[i])
        std::cout << (char) toupper(str[i++]);
}

int     main(int argc, char **argv) {

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < argc ; i++)
            print_upperStr(argv[i]);
    std::cout << std::endl;
    return 0;
}