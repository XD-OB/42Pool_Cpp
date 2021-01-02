/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:09:20 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 16:22:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name) {}

HumanB::~HumanB( void ) {}

void    HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}

void    HumanB::attack( void ) {
    std::cout << "* " << this->_name << " attacks with his [ " \
              << this->_weapon->getType() << " ] *" << std::endl;
}
