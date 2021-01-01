/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 07:03:52 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 16:07:49 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon( void ) {}

std::string&         Weapon::getType( void ) {
    return this->_type;
}

void                Weapon::setType( std::string type ) {
    this->_type = type;
}