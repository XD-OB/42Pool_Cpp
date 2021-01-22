/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:22 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 12:26:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int     main( void )
{
    std::cout << " ------ gladiator and the Gang of Red Ninjas -------" \
              << std::endl << std::endl;

    ScavTrap        dipsie = ScavTrap("dipsie");
    FragTrap        gladiator = FragTrap("gladiator");
    NinjaTrap       redNinja1 = NinjaTrap("Pedro");
    NinjaTrap       redNinja2 = NinjaTrap();

    unsigned int    damage = 0;

    // Unnecessary Talk
    gladiator.talk("* Walking in the night near Wayward Pass * Dipsie What a beautiful Night, full moon, quiet, peace :)");
    dipsie.talk("Lovely night, i heard rumors that some ninj...");

    // Ninja Pedro Attack dipsie with melee Attack
    damage = redNinja1.meleeAttack( dipsie.getName() );
    dipsie.takeDamage( damage );

    // Gladiator Attack the Ninja Snow with VAULTHUNTER.EXE
    gladiator.talk("Their fucking GOD, U ARE DEAD!!!");
    damage = gladiator.vaulthunter_dot_exe( redNinja2.getName() );
    redNinja2.takeDamage(damage);

    // Ninja Pedro Attack Gladiator with Ranged Attack:
    damage = redNinja1.rangedAttack( gladiator.getName() );
    gladiator.takeDamage( damage );

    // Ninja Snow try to heal himself
    redNinja2.beRepaired( 40 );

    // Ninjas Attack Gladiator & dipsie using Ninja Shoebox
    damage = redNinja2.ninjaShoebox( gladiator );
    gladiator.takeDamage( damage );
    damage = redNinja1.ninjaShoebox( dipsie );
    dipsie.takeDamage( damage );

    // The Ninja Snow try to escape the battle:
    std::cout << "* Ninja Snow try to escape the battle *" << std::endl;
    redNinja1.talk("WTF?? you are dead bastards!!");
    gladiator.talk("whaaaat BASTARD? i will kill u before that u can climb the wall");
    damage = gladiator.rangedAttack( redNinja2.getName() );
    redNinja2.takeDamage( damage );

    // Ninja Pedro put the final special attack to Snow:
    damage = redNinja1.ninjaShoebox( redNinja2 );
    redNinja2.takeDamage( damage );  

    // Disappear of the ninjas:
    std::cout << "* Pedro put Snow in his back and they disappeared in the dark *" << std::endl;
    gladiator.talk("FUCK FUCK! you are deads YOU ARE DEADS");

    // Turn off the motherfuckers
    std::cout << RED << "GOD" << EOC << ": The show is over i will destroy u all." << std::endl;

    return 0;
}