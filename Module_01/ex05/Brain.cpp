/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 05:55:17 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 06:54:07 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain( void ) {
    return ;
}

Brain::~Brain( void ) {
    return ;
}

std::string     Brain::identify( void ) const {

    std::ostringstream  address;
    std::string         name;

    address << (void const *)this;
    name = address.str();
    return name;
}