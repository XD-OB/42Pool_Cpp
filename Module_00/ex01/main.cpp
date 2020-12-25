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

int     len_contacts( Contact contacts[] ) {

    int     i = 0;
    while (!contacts[i].getIs_empty() && i < MAX_CONTACTS)
        i++;
    return i;
}

void    print_shortCut( std::string str ) {

    if (str.length() > 10) {
        std::cout << str.substr(0, 9) << '.';
    } else {
        std::cout << str;
        for (int i = str.length(); i < 10; i++)
            std::cout << ' ';
    }
}

void    print_listContacts( Contact contacts[] ) {

    int     len = len_contacts(contacts);
    std::cout << ",-------------------[ " << len << " ]-------------------," << std::endl;
    std::cout << "|index     |first name|last name |nickname  |" << std::endl; 
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << "|" << (i + 1) << "         |";
        print_shortCut( contacts[i].getFirst_name() );
        std::cout << "|";
        print_shortCut( contacts[i].getLast_name() );
        std::cout << "|";
        print_shortCut( contacts[i].getNickname() );
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "'-------------------------------------------'" << std::endl;
}

void    search_contacts( Contact contacts[] ) {

    if (contacts[0].getIs_empty()) {
        std::cout << "* List of contacts is empty!" << std::endl;
    } else {
        print_listContacts(contacts);
        int     index;
        std::cin >> index;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
        if (index < 1 || index > len_contacts(contacts)) {
            std::cout << "* Invalid index!" << std::endl;
        } else {
            contacts[index - 1].print();
        }
    }
}


int     main() {

    std::string     buffer;
    Contact         contacts[MAX_CONTACTS];
    int             i_add = 0;

    while ( 1 ) {
        std::getline( std::cin, buffer );
        if ( !buffer.compare("SEARCH") ) {
            search_contacts(contacts);
        } else if ( !buffer.compare("ADD") ) {
            contacts[i_add].add_infos();
            i_add = (i_add < 7) ? i_add + 1 : 0;
        } else if ( !buffer.compare("EXIT") ) {
            return 0;
        }
    }
    return 0;
}