/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:22 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 11:07:56 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int     main( void )
{
    std::cout << " ------ Gladiator and the 2 ScavTraps that block the entrance -------" \
              << std::endl << std::endl;

    FragTrap        gladiator = FragTrap("gladiator");
    ScavTrap        dipsie = ScavTrap("dipsie");
    ScavTrap        scavSnow = ScavTrap();
    ClapTrap        *bifi;

    unsigned int    damage = 0;

    // Unnecessary Talk
    gladiator.talk("* At the Triton Flats at the main entrance to RedBelly's stronghold * Long trip but finally i'm here, i should hurry up JACK wait for me.");
    dipsie.talk("STOOOP right there! I'm dipsie a SCAV Gang member, no one should pass!");
    gladiator.talk("But i'm in hurry plz OPEN THE DOOOOR!!!");
    scavSnow.talk("NO :)");

    // Dipsie hit Scav Snow with Melee Attack
    dipsie.talk("SHUT THE FUCK UP! idiot intern.");
    damage = dipsie.meleeAttack( scavSnow.getName() );
    scavSnow.takeDamage( damage );

    // Scav Snow hit gladiator with Ranged Attack
    scavSnow.talk("I will erase u stranger");
    damage = scavSnow.rangedAttack( gladiator.getName() );
    gladiator.takeDamage( damage );

    // Scav Snow heal himself:
    scavSnow.beRepaired( 10 );

    // Clap Trap hit scav snow with VOLTHUNTER.EXE:
    gladiator.talk("SHUT THE FUCK UP! Bastard");
    damage = gladiator.meleeAttack( scavSnow.getName() );
    scavSnow.takeDamage( damage );
    damage = gladiator.vaulthunter_dot_exe( scavSnow.getName() );
    scavSnow.takeDamage( damage );
    damage = gladiator.vaulthunter_dot_exe( scavSnow.getName() );
    scavSnow.takeDamage( damage );

    // dipsie give clap Trap a challenge:
    dipsie.talk("Take it easy, to give you access you should pass a challenge.");
    gladiator.talk("Shout i accept");
    dipsie.challengeNewcomer( gladiator.getName() );
    scavSnow.challengeNewcomer( gladiator.getName() );

    // Test a custom gladiator:
    std::cout << RED << "GOD" << EOC << ": A Quick creation of a custom claptrap." << std::endl;
    bifi = new ClapTrap("Rd1b-XX", "Jesus", 99, 5000, 5000, 5000, 5000, 1000, 500, 200);
    bifi->showState();
    delete bifi;

    // Turn off the motherfuckers
    std::cout << RED << "GOD" << EOC << ": The show is over i will destroy u all." << std::endl;

    return 0;
}