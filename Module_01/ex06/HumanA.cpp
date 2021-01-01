/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:09:39 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 17:49:05 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {}

void    HumanA::attack( void ) {
    std::cout << this->_name << " * attacks with his [ " \
              << this->_weapon.getType() << " ] *" << std::endl;
}
