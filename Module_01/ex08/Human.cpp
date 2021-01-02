/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 00:59:14 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 02:22:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

struct  t_attack {

    std::string     name;
    void            (Human::*f) ( std::string const & );
};

Human::Human( std::string name ) : _name(name) {}

Human::~Human( void ) {}

t_attack        Human::_attacks[3] = {
    {
        "meleeAttack",
        &Human::meleeAttack,
    },
    {
        "rangedAttack",
        &Human::rangedAttack,
    },
    {
        "intimidatingShout",
        &Human::intimidatingShout,
    },
};

std::string     Human::getName( void ) const {
    return this->_name;
}

void    Human::meleeAttack( std::string const & target ) {

    std::cout << " '" << this->getName() << "' attack '" << target \
              << "' with a melee attack" << std::endl;
}

void    Human::rangedAttack( std::string const & target ) {

    std::cout << " '" << this->getName() << "' attack '" << target \
              << "' with a ranged attack" << std::endl;
}

void    Human::intimidatingShout( std::string const & target ) {

    std::cout << " '" << this->getName() << "' intimidate '" << target \
              << "' with a shout" << std::endl;
}

void    Human::action( std::string const & action_name, std::string const & target ) {

    for ( int i = 0; i < 3; i++ )
        if ( action_name == this->_attacks[i].name ) {
            (this->*(_attacks[i].f)) ( target );
            break ;
        }
}
