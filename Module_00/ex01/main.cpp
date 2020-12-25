/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:51:09 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:51:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstring>


void    search_contacts(Contact contacts[8]) {

    std::cout << "index      | first name | last name  | nickname " << std::endl;
    
    for (int i = 0; i < 8; i++) {
        if (contacts[i].getIs_full() == false)
            break ;
        contacts[i].printShortFirst_name();
        std::cout << " | ";
        std::cout << std::endl;
    }
}


int     main() {

    Contact     contacts[8];
    char        buffer[100];
    int         i_add = 0;

    while ( 1 ) {
        std::cin >> buffer;
        if ( !strcmp(buffer, "SEARCH") ) {
            search_contacts(contacts);
        } else if ( !strcmp(buffer, "ADD") ) {
            contacts[i_add].add_infos();
            i_add = (i_add < 7) ? i_add + 1 : 0;
        } else if ( !strcmp(buffer, "EXIT") ) {
            return 0;
        }
    }
    return 0;
}