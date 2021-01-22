/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:22 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 15:39:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int     main( void )
{
    std::cout << " ------ The Super Trap -------" \
              << std::endl << std::endl;

    FragTrap        gladiator = FragTrap("gladiator");
    SuperTrap       escanor = SuperTrap("escanor");
    ScavTrap        dipsie = ScavTrap("dipsie");
    NinjaTrap       piwie = NinjaTrap("Piwie");

    unsigned int    damage = 0;

    // Unnecessary Talk
    gladiator.talk("Long time no seen, Voila abomination let's see the work of the creator");
    escanor.talk("* Escanor Pitie the others * weak creatures prepare to die");

    // Dipsie hit escanor with Melee Attack
    damage = dipsie.meleeAttack( escanor.getName() );
    escanor.takeDamage( damage );

    // escanor heal
    escanor.beRepaired( 5 );

    // Escanor use all he's kind of attacks
    damage = escanor.meleeAttack( gladiator.getName() );
    gladiator.takeDamage( damage );
    damage = escanor.rangedAttack( piwie.getName() );
    piwie.takeDamage( damage );
    damage = escanor.ninjaShoebox( dipsie );
    dipsie.takeDamage( damage );
    damage = escanor.ninjaShoebox( piwie );
    piwie.takeDamage( damage );
    damage = escanor.vaulthunter_dot_exe( gladiator.getName() );
    gladiator.takeDamage( damage );

    // Turn off the motherfuckers
    std::cout << RED << "GOD" << EOC << ": The show is over i will destroy u all." << std::endl;

    return 0;
}