/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 00:59:14 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 03:50:31 by obelouch         ###   ########.fr       */
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
        &Human::_meleeAttack,
    },
    {
        "rangedAttack",
        &Human::_rangedAttack,
    },
    {
        "intimidatingShout",
        &Human::_intimidatingShout,
    },
};

std::string     Human::getName( void ) const {
    return this->_name;
}

void    Human::_meleeAttack( std::string const & target ) {

    std::cout << " '" << this->getName() << "' attack '" << target \
              << "' with a melee attack" << std::endl;
}

void    Human::_rangedAttack( std::string const & target ) {

    std::cout << " '" << this->getName() << "' attack '" << target \
              << "' with a ranged attack" << std::endl;
}

void    Human::_intimidatingShout( std::string const & target ) {

    std::cout << " '" << this->getName() << "' intimidate '" << target \
              << "' with a shout" << std::endl;
}

void    Human::action( std::string const & action_name, std::string const & target ) {

    int     i = 0;

    for ( i = 0; i < 3; i++ )
        if ( action_name == this->_attacks[i].name ) {
            (this->*(_attacks[i].f)) ( target );
            break ;
        }
    if ( i == 3 )
        std::cout << "Error: Unknown action name!" << std::endl;
}
