/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 04:34:57 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/27 04:34:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iomanip>


Phonebook::Phonebook() {
    this->_size = 0;
}

Phonebook::~Phonebook() {
    return ;
}

void        Phonebook::addContact( void ) {
    if ( this->isFull() )
        std::cout << "* Phonebook is full! Restart the program to delete all" << std::endl;
    else {
        std::cout << "* Adding new contact..." << std::endl;
        this->_contacts[this->_size++].add_infos();
        std::cout << std::endl << "[√] Contact Successfully Added." << std::endl;
    }
}

bool        Phonebook::isFull( void ) const {
    return ( this->_size < MAX_CONTACTS ) ? false : true;
}

Contact     Phonebook::getContact( int index ) const {
    return this->_contacts[index];
}

void        Phonebook::prompt( void ) const {
    std::cout << ">>";
}


void        Phonebook::exit( void ) const {

    std::cout << "* Phonebook is destroyed!" << std::endl;
    std::exit(0);
}

void        Phonebook::welcome( void ) const {

    std::cout << "Welcome to NUL Phonebook!" << std::endl;
    std::cout << "Available commands:" << std::endl   \
			<< "- ADD:    Add a contact" << std::endl \
			<< "- SEARCH: Search for a contact" << std::endl  \
			<< "- EXIT:   Exit the program" << std::endl;
}

void        print_shortCut( std::string str ) {

    if (str.length() > 10)
        std::cout << str.substr(0, 9) << '.';
    else {
        std::cout << std::setfill( ' ' ) << std::setw( 10 );
        std::cout << str;

    }
}

void        Phonebook::print( void ) const {

    std::cout << ",-------------------[ " << this->_size << " ]-------------------," << std::endl;
    std::cout << "|index     |first name|last name |nickname  |" << std::endl; 
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < this->_size; i++) {
        std::cout << "|" << (i + 1) << "         |";
        print_shortCut( this->getContact(i).getFirst_name() );
        std::cout << "|";
        print_shortCut( this->getContact(i).getLast_name() );
        std::cout << "|";
        print_shortCut( this->getContact(i).getNickname() );
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "'-------------------------------------------'" << std::endl;
}

void        Phonebook::search( void ) const {

    int     index;

    if ( !this->_size ) {
        std::cout << "* List of contacts is empty!" << std::endl;
    } else {
        this->print();
        this->prompt();
        std::cin >> index;
        if (index < 1 || index > this->_size) {
            std::cout << "* Invalid index!" << std::endl;
        } else {
            this->getContact(index - 1).print();
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
}
