/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 04:39:20 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:34:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>


ZombieHorde::ZombieHorde( int n ) : _n(n) {
    std::cout << "OOOWeeeeeee33333!!!! AAAA77 onchdo chiwa7d!!" << std::endl;
    this->_horde = new Zombie[n];
}

ZombieHorde::~ZombieHorde() {
    std::cout << "* The horde is killed *" << std::endl;
    delete [] this->_horde;
}

void    ZombieHorde::advert( void ) const {

    for (int i = 0; i < this->_n; i++)
        this->_horde[i].advert();
}