/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 04:34:57 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/28 04:14:55 by obelouch         ###   ########.fr       */
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


bool        Phonebook::isFull( void ) const {
    return ( this->_size < MAX_CONTACTS ) ? false : true;
}

Contact     Phonebook::getContact( int index ) const {
    return this->_contacts[index];
}

void        Phonebook::prompt( void ) const {
    cout << endl << ">> ";
}

void        Phonebook::exit( void ) const {

    cout << "* BYE! Phonebook is destroyed :)" << endl;
    std::exit(0);
}

void        Phonebook::addContact( void ) {
    if ( this->isFull() )
        cout << "* Phonebook is full! Restart the program to delete all" << endl;
    else {
        cout << "* Adding new contact..." << endl << endl;
        this->_contacts[this->_size++].add_infos();
        cout << endl << "[√] Contact Successfully Added." << endl;
    }
}

void        Phonebook::welcome( void ) const {

    cout << "Welcome to NUL Phonebook!" << endl << endl \
        << "Available commands:" << endl   \
		<< "- ADD:    Add a contact" << endl \
		<< "- SEARCH: Search for a contact" << endl  \
		<< "- EXIT:   Exit the program" << endl ;
}

void        print_shortCut( string str ) {

    if (str.length() > 10)
        cout << str.substr(0, 9) << '.';
    else {
        cout << setfill( ' ' ) << setw( 10 );
        cout << str;
    }
}

void        Phonebook::print( void ) const {

    cout << ",-------------------[ " << this->_size << " ]-------------------," << endl;
    cout << "|index     |first name|last name |nickname  |" << endl; 
    cout << "|-------------------------------------------|" << endl;
    for (int i = 0; i < this->_size; i++) {
        cout << "|" << (i + 1) << "         |";
        print_shortCut( this->getContact(i).getFirst_name() );
        cout << "|";
        print_shortCut( this->getContact(i).getLast_name() );
        cout << "|";
        print_shortCut( this->getContact(i).getNickname() );
        cout << "|";
        cout << endl;
    }
    cout << "'-------------------------------------------'" << endl;
}

void        Phonebook::search( void ) const {

    int     index;

    if ( !this->_size ) {
        cout << "* List of contacts is empty!" << endl;
    } else {
        this->print();
        cout << "=> Enter the index: ";
        cin >> index;
        if (index < 1 || index > this->_size) {
            cout << "* Error: Invalid index!" << endl;
        } else {
            this->getContact(index - 1).print();
        }
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
