/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:49:54 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:49:54 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact() {
    this->_is_empty = true;
}

Contact::~Contact() {
    return ;
}

// Getters: ----------------------------------------------

bool            Contact::getIs_empty( void ) const {
    return this->_is_empty;
}

std::string     Contact::getFirst_name( void ) const {
    return this->_first_name;
}

std::string     Contact::getLast_name( void ) const {
    return this->_last_name;
}

std::string     Contact::getNickname( void ) const {
    return this->_nickname;
}

std::string     Contact::getLogin( void ) const {
    return this->_login;
}

std::string     Contact::getPostal_address( void ) const {
    return this->_postal_address;
}

std::string     Contact::getEmail_address( void ) const {
    return this->_email_address;
}

std::string     Contact::getPhone_number( void ) const {
    return this->_phone_number;
}

std::string     Contact::getBirthday_date( void ) const {
    return this->_birthday_date;
}

std::string     Contact::getFavorite_meal( void ) const {
    return this->_birthday_date;
}

std::string     Contact::getUnderwear_color( void ) const {
    return this->_underwear_color;
}

std::string     Contact::getDarkest_secret( void ) const {
    return this->_darkest_secret;
}

// Setters:  -----------------------------------------------

bool    Contact::setFirst_name( std::string first_name ) {
    this->_first_name = first_name;
    return true;
}

bool    Contact::setLast_name( std::string last_name ) {
    this->_last_name = last_name;
    return true;
}

bool    Contact::setNickname( std::string nickname ) {
    this->_nickname = nickname;
    return true;
}

bool    Contact::setLogin( std::string login ) {
    this->_login = login;
    return true;
}

bool    Contact::setPostal_address( std::string postal_address ) {
    this->_postal_address = postal_address;
    return true;
}

bool    Contact::setEmail_address( std::string email_address ) {
    this->_email_address = email_address;
    return true;
}

bool    Contact::setPhone_number( std::string phone_number ) {
    this->_phone_number = phone_number;
    return true;
}

bool    Contact::setBirthday_date( std::string birthday_date ) {
    this->_birthday_date = birthday_date;
    return true;
}

bool    Contact::setFavorite_meal( std::string favorite_meal ) {
    this->_favorite_meal = favorite_meal;
    return true;
}

bool    Contact::setUnderwear_color( std::string underwear_color ) {
    this->_underwear_color = underwear_color;
    return true;
}

bool    Contact::setDarkest_secret( std::string darkest_secret ) {
    this->_darkest_secret = darkest_secret;
    return true;
}

// fonctions members:  ---------------------------------------------

void    Contact::print( void ) const {

    std::cout << "First name: " << this->_first_name << std::endl;
    std::cout << "Last name : " << this->_last_name << std::endl;
    std::cout << "Nickname  : " << this->_nickname << std::endl;
    std::cout << "Login     : " << this->_login << std::endl;
    std::cout << "Postal address : " << this->_postal_address << std::endl;
    std::cout << "Email address  : " << this->_email_address << std::endl;
    std::cout << "Phone number   : " << this->_phone_number << std::endl;
    std::cout << "Birthday date  : " << this->_birthday_date << std::endl;
    std::cout << "Favorite meal  : " << this->_favorite_meal << std::endl;
    std::cout << "Underwear color: " << this->_underwear_color << std::endl;
    std::cout << "darkest secret :" << this->_darkest_secret << std::endl;
}

void    Contact::add_infos( void ) {

    std::string     buffer;

    std::cout << "First name: ";
    std::getline( std::cin, buffer );
    this->setFirst_name(buffer);

    std::cout << "Last name : ";
    std::getline( std::cin, buffer );
    this->setLast_name(buffer);

    std::cout << "Nickname  : ";
    std::getline( std::cin, buffer );
    this->setNickname(buffer);

    std::cout << "Login     : ";
    std::getline( std::cin, buffer );
    this->setLogin(buffer);

    std::cout << "Postal address : ";
    std::getline( std::cin, buffer );
    this->setPostal_address(buffer);

    std::cout << "Email address  : ";
    std::getline( std::cin, buffer );
    this->setEmail_address(buffer);

    std::cout << "Phone number   : ";
    std::getline( std::cin, buffer );
    this->setPhone_number(buffer);

    std::cout << "Birthday date  : ";
    std::getline( std::cin, buffer );
    this->setBirthday_date(buffer);

    std::cout << "Favorite meal  : ";
    std::getline( std::cin, buffer );
    this->setFavorite_meal(buffer);

    std::cout << "Underwear color: ";
    std::getline( std::cin, buffer );
    this->setUnderwear_color(buffer);

    std::cout << "Darkest secret : ";
    std::getline( std::cin, buffer );
    this->setDarkest_secret(buffer);

    this->_is_empty = false;
}
