/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:03:54 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 01:17:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string name, std::string color, unsigned int age ) : _name(name), _color(color), _age(age) {
    return ;
}

Pony::~Pony( void ) {
    return ;
}

// Getters:

std::string     Pony::getName( void ) const {
    return this->_name;
}

std::string     Pony::getColor( void ) const {
    return this->_color;
}

unsigned int    Pony::getAge( void ) const {
    return this->_age;
}

// Setters:

bool            Pony::setName( std::string name ) {
    if ( !name.empty() )
        return false;
    this->_name = name;
    return true;
}

bool            Pony::setColor( std::string color ) {
    if ( !color.empty() )
        return false;
    this->_color = color;
    return true;
}

bool            Pony::setAge( unsigned int age ) {
    if ( age >  33 )
        return false;
    this->_age = age;
    return true;
}

