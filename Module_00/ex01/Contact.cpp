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
#include <iostream>
#include <cstring>

//----------------   Commands:   -------------------------

void    Contact::add_infos( void ) {

    char    buffer[50];

    // Set first name
    std::cout << "first name: ";
    std::cin >> buffer;
    this->setFirst_name(buffer);

    // Set last name
    std::cout << "last name: ";
    std::cin >> buffer;
    this->setLast_name(buffer);

    // Set Nickname
    std::cout << "nickname: ";
    std::cin >> buffer;
    this->setNickname(buffer);

    // Set login
    std::cout << "login: ";
    std::cin >> buffer;
    this->setLogin(buffer);

    // Set postal address
    std::cout << "postal address: ";
    std::cin >> buffer;
    this->setPostal_address(buffer);

    // Set email address
    std::cout << "email address: ";
    std::cin >> buffer;
    this->setEmail_address(buffer);

    // Set phone number
    std::cout << "phone number: ";
    std::cin >> buffer;
    this->setPhone_number(buffer);

    // Set birthday date
    std::cout << "birthday date: ";
    std::cin >> buffer;
    this->setBirthday_date(buffer);

    // Set favorite meal
    std::cout << "favorite meal: ";
    std::cin >> buffer;
    this->setFavorite_meal(buffer);

    // Set underwear color
    std::cout << "underwear color: ";
    std::cin >> buffer;
    this->setUnderwear_color(buffer);

    // Set darkest secret
    std::cout << "darkest secret: ";
    std::cin >> buffer;
    this->setDarkest_secret(buffer);

    // Set the Full Atribute
    this->_is_full = true;

    // Printandsjdsdfsdfsdfdsfsdfsdfdsf
    std::cout << "first name: " << this->_first_name << std::endl;
    std::cout << "last name: " << this->_last_name << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
    std::cout << "login: " << this->_login << std::endl;
    std::cout << "postal address: " << this->_postal_address << std::endl;
    std::cout << "email address: " << this->_email_address << std::endl;
    std::cout << "phone number: " << this->_phone_number << std::endl;
    std::cout << "birthday date: " << this->_birthday_date << std::endl;
    std::cout << "favorite meal: " << this->_favorite_meal << std::endl;
    std::cout << "underwear color: " << this->_underwear_color << std::endl;
    std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}

//----------------   Short Print:   -------------------------

void    Contact::printShortFirst_name( void ) const {

    char    buffer[11];
    int     len;

    len = strlen(this->_first_name);
    if (len > 10) {
        strncpy(buffer, this->_first_name, 10);
        buffer[9] = '.';
    } else {
        strcpy(buffer, this->_first_name);
        for(int i = len; i < 10; i++)
            buffer[i] = ' ';
    }
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortLast_name( void ) const {


    char    buffer[11];
    strncpy(buffer, this->_last_name, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortNickname( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_nickname, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortLogin( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_login, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortPostal_address( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_postal_address, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortEmail_address( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_email_address, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortPhone_number( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_phone_number, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortBirthday_date( void ) const {

        char    buffer[11];
        strncpy(buffer, this->_birthday_date, 10);
        buffer[9] = '.';
        buffer[10] = '\0';
        std::cout << buffer;
}

void    Contact::printShortFavorite_meal( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_favorite_meal, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortUnderwear_color( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_underwear_color, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

void    Contact::printShortDarkest_secret( void ) const {

    char    buffer[11];
    strncpy(buffer, this->_darkest_secret, 10);
    buffer[9] = '.';
    buffer[10] = '\0';
    std::cout << buffer;
}

//----------------   Getters:   -------------------------

bool    Contact::getIs_full( void ) const {

    return this->_is_full;
}

void    Contact::printFirst_name( void ) const {

    std::cout << this->_first_name;
}

void    Contact::printLast_name( void ) const {

    std::cout << this->_last_name;
}

void    Contact::printNickname( void ) const {

    std::cout << this->_nickname;
}

void    Contact::printLogin( void ) const {

    std::cout << this->_login;
}

void    Contact::printPostal_address( void ) const {

    std::cout << this->_postal_address;
}

void    Contact::printEmail_address( void ) const {

    std::cout << this->_email_address;
}

void    Contact::printPhone_number( void ) const {

    std::cout << this->_phone_number;
}

void    Contact::printBirthday_date( void ) const {

    std::cout << this->_birthday_date;
}

void    Contact::printFavorite_meal( void ) const {

    std::cout << this->_favorite_meal;
}

void    Contact::printUnderwear_color( void ) const {

    std::cout << this->_underwear_color;
}

void    Contact::printDarkest_secret( void ) const {

    std::cout << this->_darkest_secret;
}

//----------------   Setters:   -------------------------

bool    Contact::setFirst_name( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_first_name, value);
    return true;
}

bool    Contact::setLast_name( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_last_name, value);
    return true;
}

bool    Contact::setNickname( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_nickname, value);
    return true;
}

bool    Contact::setLogin( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_login, value);
    return true;
}

bool    Contact::setPostal_address( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_postal_address, value);
    return true;
}

bool    Contact::setEmail_address( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_email_address, value);
    return true;
}

bool    Contact::setPhone_number( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_phone_number, value);
    return true;
}

bool    Contact::setBirthday_date( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_birthday_date, value);
    return true;
}

bool    Contact::setFavorite_meal( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_favorite_meal, value);
    return true;
}

bool    Contact::setUnderwear_color( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_underwear_color, value);
    return true;
}

bool    Contact::setDarkest_secret( char *value ) {
    if (!value || value == "")
        return false;
    strcpy(this->_darkest_secret, value);
    return true;
}