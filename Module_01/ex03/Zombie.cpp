/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:03:55 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:43:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


std::string     Zombie::_rdNames[18] = {
    "Tangero",
    "Abraxu",
    "Pickaro",
    "Antoni",
    "Fifafonfi",
    "Roxava",
    "Sowdad",
    "Maryou",
    "Pipa",
    "Dipssi",
    "Fotato",
    "Vitangit",
    "Pantero",
    "Sixassi",
    "HolyMoly",
    "Difndef",
    "Zanzoun",
    "Pikalto"
};

Zombie::Zombie( void ) {
    this->_name = Zombie::_rdNames[rand() % 18];
    this->_type = "Walker";
}

Zombie::~Zombie( void ) {
    std::cout << "Killed :) [ " << this->_name << " ("\
            << this->_type << ")]" << std::endl;
}

std::string     Zombie::getName( void ) const {
    return this->_name;
}

std::string     Zombie::getType( void ) const {
    return this->_type;
}

void    Zombie::setName( std::string name ) {
    this->_name = name;
}

void    Zombie::setType( std::string type ) {
    this->_type = type;
}

void    Zombie::advert( void ) const {
    std::cout << "[ " << this->_name << " (" << this->_type \
                << ") ] wach koulchi zin ola ghir dak lBraiiiiin!!!" << std::endl;
}