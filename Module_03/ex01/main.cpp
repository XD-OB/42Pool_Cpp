/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:22 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 08:38:20 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int     main( void )
{
    std::cout << " ------ ClapTrap and the 2 ScavTraps that block the entrance -------" \
              << std::endl << std::endl;

    FragTrap        clapTrap = FragTrap("clapTrap");
    ScavTrap        dipsie = ScavTrap("dipsie");
    ScavTrap        scavSnow = ScavTrap();

    unsigned int    damage = 0;

    // Unnecessary Talk
    clapTrap.talk("* At the Triton Flats at the main entrance to RedBelly's stronghold * Long trip but finally i'm here, i should hurry up JACK wait for me.");
    dipsie.talk("STOOOP right there! I'm dipsie a SCAV Gang member, no one should pass!");
    clapTrap.talk("But i'm in hurry plz OPEN THE DOOOOR!!!");
    scavSnow.talk("NO :)");

    // Dipsie hit Scav Snow with Melee Attack
    dipsie.talk("SHUT THE FUCK UP! idiot intern.");
    damage = dipsie.meleeAttack( scavSnow.getName() );
    scavSnow.takeDamage( damage );

    // Scav Snow hit clapTrap with Ranged Attack
    scavSnow.talk("I will erase u stranger");
    damage = scavSnow.rangedAttack( clapTrap.getName() );
    clapTrap.takeDamage( damage );

    // Scav Snow heal himself:
    scavSnow.beRepaired( 10 );

    // Clap Trap hit scav snow with VOLTHUNTER.EXE:
    clapTrap.talk("SHUT THE FUCK UP! Bastard");
    damage = clapTrap.meleeAttack( scavSnow.getName() );
    scavSnow.takeDamage( damage );
    damage = clapTrap.vaulthunter_dot_exe( scavSnow.getName() );
    scavSnow.takeDamage( damage );
    damage = clapTrap.vaulthunter_dot_exe( scavSnow.getName() );
    scavSnow.takeDamage( damage );

    // dipsie give clap Trap a challenge:
    dipsie.talk("Take it easy, to give you access you should pass a challenge.");
    clapTrap.talk("NOW u will know your true purpose u little shit. Yoo! my little bitch copy come here, ARE U AFRAID??");
    clapTrap.talk("Shout i accept");
    dipsie.challengeNewcomer( clapTrap.getName() );
    scavSnow.challengeNewcomer( clapTrap.getName() );

    // Turn off the motherfuckers after showing the states
    std::cout << RED << "GOD" << EOC << ": Show me your states." << std::endl;
    clapTrap.showState();
    scavSnow.showState();
    dipsie.showState();
    std::cout << RED << "GOD" << EOC << ": The show is over i will destroy u all." << std::endl;

    return 0;
}