/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 07:03:52 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 07:16:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon( void ) {}

std::string&         Weapon::getType( void ) const {
    return this->_type;
}

void                Weapon::setType( std::string type ) {
    this->_type = type;
}