/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:03:55 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 04:13:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name, std::string type ) : _name(name), _type(type) {
    return ;
}

Zombie::~Zombie( void ) {
    std::cout << "Killed :) [ " << this->_name << " ("\
            << this->_type << ")]" << std::endl;
}

void    Zombie::advert( void ) const {
    std::cout << "[ " << this->_name << " (" << this->_type \
                << ") ] wach koulchi zin ola ghir dak lBraiiiiin!!!" << std::endl;
}