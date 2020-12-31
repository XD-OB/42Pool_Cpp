/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:11:37 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 03:20:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>


ZombieEvent::ZombieEvent( void ) {
    return ;
}

ZombieEvent::~ZombieEvent( void ) {
    return ;
}

std::string     ZombieEvent::_rdNames[12] = {
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
};

void            ZombieEvent::randomChump( void ) const {
    
    int     index = rand() % 12;
    Zombie  zombie = Zombie(
        ZombieEvent::_rdNames[index],
        this->_type
    );
    zombie.advert();
}

void            ZombieEvent::setZombieType( std::string type ) {
    this->_type = type;
}

Zombie*         ZombieEvent::newZombie( std::string name ) const {
    return new Zombie( name, this->_type );
}
