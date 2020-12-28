/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:49:54 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:49:54 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


Contact::Contact() {
    this->_is_empty = true;
}

Contact::~Contact() {
    return ;
}

// Getters: ----------------------------------------------

bool        Contact::getIs_empty( void ) const {
    return this->_is_empty;
}

string      Contact::getFirst_name( void ) const {
    return this->_first_name;
}

string      Contact::getLast_name( void ) const {
    return this->_last_name;
}

string      Contact::getNickname( void ) const {
    return this->_nickname;
}

string      Contact::getLogin( void ) const {
    return this->_login;
}

string      Contact::getPostal_address( void ) const {
    return this->_postal_address;
}

string      Contact::getEmail_address( void ) const {
    return this->_email_address;
}

string      Contact::getPhone_number( void ) const {
    return this->_phone_number;
}

string      Contact::getBirthday_date( void ) const {
    return this->_birthday_date;
}

string      Contact::getFavorite_meal( void ) const {
    return this->_birthday_date;
}

string      Contact::getUnderwear_color( void ) const {
    return this->_underwear_color;
}

string      Contact::getDarkest_secret( void ) const {
    return this->_darkest_secret;
}

// Setters:  -----------------------------------------------

bool    Contact::setFirst_name( string first_name ) {
    this->_first_name = first_name;
    return true;
}

bool    Contact::setLast_name( string last_name ) {
    this->_last_name = last_name;
    return true;
}

bool    Contact::setNickname( string nickname ) {
    this->_nickname = nickname;
    return true;
}

bool    Contact::setLogin( string login ) {
    this->_login = login;
    return true;
}

bool    Contact::setPostal_address( string postal_address ) {
    this->_postal_address = postal_address;
    return true;
}

bool    Contact::setEmail_address( string email_address ) {
    this->_email_address = email_address;
    return true;
}

bool    Contact::setPhone_number( string phone_number ) {
    this->_phone_number = phone_number;
    return true;
}

bool    Contact::setBirthday_date( string birthday_date ) {
    this->_birthday_date = birthday_date;
    return true;
}

bool    Contact::setFavorite_meal( string favorite_meal ) {
    this->_favorite_meal = favorite_meal;
    return true;
}

bool    Contact::setUnderwear_color( string underwear_color ) {
    this->_underwear_color = underwear_color;
    return true;
}

bool    Contact::setDarkest_secret( string darkest_secret ) {
    this->_darkest_secret = darkest_secret;
    return true;
}

// fonctions members:  ---------------------------------------------

void    Contact::print( void ) const {

    cout << "-------------------------------------" << endl;
    cout << "First name: " << this->_first_name << endl;
    cout << "Last name : " << this->_last_name << endl;
    cout << "Nickname  : " << this->_nickname << endl;
    cout << "Login     : " << this->_login << endl;
    cout << "Postal address : " << this->_postal_address << endl;
    cout << "Email address  : " << this->_email_address << endl;
    cout << "Phone number   : " << this->_phone_number << endl;
    cout << "Birthday date  : " << this->_birthday_date << endl;
    cout << "Favorite meal  : " << this->_favorite_meal << endl;
    cout << "Underwear color: " << this->_underwear_color << endl;
    cout << "darkest secret :" << this->_darkest_secret << endl;
    cout << "-------------------------------------" << endl;
}

bool    ft_str_alpha( string str ) {

    for (int i = 0; str.length(); i++)
        if ( isdigit(str[i]) )
            return false;
    return true;
}

bool    ft_str_digit( string str ) {

    int i = (str[0] == '+' || str[0] == '-') ? 1 : 0;

    while (i < str.length())
        if ( isalpha(str[i++]) )
            return false;
    return true;
}

void    Contact::add_infos( void ) {

    string     buffer;

    // first name:
    while ( true ) {
        cout << "=> First name: ";
        getline( cin, buffer );
        if ( ft_str_alpha(buffer) ) {
            this->setFirst_name(buffer);
            break ;
        }
        cout << ALPHA_MSG << endl; 
    }

    // last name:
    while ( true ) {
        cout << "=> Last name : ";
        getline( cin, buffer );
        if ( ft_str_alpha(buffer) ) {
            this->setLast_name(buffer);
            break ;
        }
        cout << ALPHA_MSG << endl; 
    }

    // Nickname:
    while ( true ) {
        cout << "=> Nickname  : ";
        getline( cin, buffer );
        if ( !buffer.empty() ||  (!this->getFirst_name().empty() && !this->getLast_name().empty()) ) {
            this->setNickname(buffer);
            break ;
        }
        cout << NICKNAME_MSG << endl;
    }

    // Login:
    cout << "=> Login       : ";
    getline( cin, buffer );
    this->setLogin(buffer);

    // Postal Address:
    cout << "=> Postal address : ";
    getline( cin, buffer );
    this->setPostal_address(buffer);

    // Email Address:
    while ( true ) {
        cout << "=> Email address  : ";
        getline( cin, buffer );
        if ( buffer.find("@") != string::npos ) {
            this->setEmail_address(buffer);
            break ;
        }
        cout << EMAIL_MSG << endl; 
    }

    // Phone number:
    while ( true ) {
        cout << "=> Phone number : ";
        getline( cin, buffer );
        if ( buffer.empty() )
            cout << "* This field is required!" << endl;
        else if ( ft_str_digit(buffer) && buffer[0] != '-') {
            this->setPhone_number(buffer);
            break ;
        }
        else
            cout << PHONE_MSG << endl; 
    }

    // Birthdate
    int     day;
    int     month;
    int     year;

    cout << "=> Birthday date  : ";
    //// get Day:
    while ( true ) {
        cout << "- Day: ";
        cin >> day;
        if ( day > 0 && day < 32 )
            break ;
        cout << "* Invalid Input!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    //// get Month:
    while ( true ) {
        cout << "- Month: ";
        cin >> month;
        if ( month > 0 && month < 12 )
            break ;
        cout << "* Invalid Input!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    //// get Year:
    while ( true ) {
        cout << "- Month: ";
        cin >> month;
        if ( month > 1900 && month < 2021 )
            break ;
        cout << "* Invalid Input!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    ///// Build ALL ==>
    string     birthdate = to_string(day) + '/' + to_string(month) + '/' + to_string(year);
    this->setBirthday_date(birthdate);


    // Favorite meal:
    while ( true ) {
        cout << "=> Favorite meal  : ";
        getline( cin, buffer );
        if ( ft_str_alpha(buffer) ) {
            this->setFavorite_meal(buffer);
            break ;
        }
        cout << ALPHA_MSG << endl; 
    }

    // Underwear color:
    cout << "=> Underwear color: ";
    getline( cin, buffer );
    this->setUnderwear_color(buffer);

    // Darkest Secret:
    cout << "=> Darkest secret : ";
    getline( cin, buffer );
    this->setDarkest_secret(buffer);

    this->_is_empty = false;
}
