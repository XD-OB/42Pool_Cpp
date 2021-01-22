/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:22 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 06:31:56 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int     main( void )
{
    std::cout << " ------ The legendary battle between ClapTrap and the Bastard FragTrap -------" \
              << std::endl << std::endl;

    FragTrap        clapTrap = FragTrap("clapTrap");
    FragTrap        fragSnow = FragTrap();
    FragTrap        copyClapTrap;
    FragTrap        copyFragSnow;

    unsigned int    damage = 0;

    // Unnecessary Talk
    fragSnow.talk("* Walking in the FR4GTR4p factory * Happy life Hmmmm, i want to travel FAR FAR away and have a life, but why i dont have a name?");
    clapTrap.talk("Heyy Who let u walk free like that?? you Frag fucking Snow i can't accept a Bastard here!!");
    fragSnow.talk("Whaaaaat? you are done, prepare yourself to die.");

    // Frag Snow Attack Clap Trap with Ranged Attack
    damage = fragSnow.rangedAttack( clapTrap.getName() );
    clapTrap.takeDamage( damage );

    // Clap Trap Attack Frag Snow with Melee Attack
    damage = clapTrap.meleeAttack( fragSnow.getName() );
    fragSnow.takeDamage( damage );

    // Frag Snow Attack Clap Trap with VOLTHUNTER.EXE:
    damage = fragSnow.vaulthunter_dot_exe( clapTrap.getName() );
    clapTrap.takeDamage( damage );

    // ClapTrap Calling for he's Copy and heal himself:
    clapTrap.talk("NOW u will know your true purpose u little shit. Yoo! my little bitch copy come here, ARE U AFRAID??");
    copyClapTrap = clapTrap;
    clapTrap.talk("your name is COPYCLAPTRAP not ClAp TrAp comprendes?");
    copyClapTrap.setName("copy ClapTrap");
    copyClapTrap.beRepaired( copyClapTrap.getEnergyPoints() );
    clapTrap.beRepaired( 50 );

    // FragSnow Attack heavely the copy and killed it:
    fragSnow.talk("TF??? 2 Claptraps i gonna kill u all");
    damage = fragSnow.vaulthunter_dot_exe( copyClapTrap.getName() );
    copyClapTrap.takeDamage( damage );
    damage = fragSnow.vaulthunter_dot_exe( copyClapTrap.getName() );
    copyClapTrap.takeDamage( damage );
    damage = fragSnow.vaulthunter_dot_exe( copyClapTrap.getName() );
    copyClapTrap.takeDamage( damage );
    
    // FragSnow want to heal himself or use VAULTHUNTER.EXE but no EP left
    fragSnow.beRepaired( 50 );
    damage = fragSnow.vaulthunter_dot_exe( clapTrap.getName() );
    clapTrap.takeDamage( damage );
    clapTrap.talk("Hahahaha No EP pathetic your anger blinded U");

    // The final battle
    damage = clapTrap.vaulthunter_dot_exe( fragSnow.getName() );
    fragSnow.takeDamage( damage );
    damage = fragSnow.rangedAttack( clapTrap.getName() );
    clapTrap.takeDamage( damage );
    damage = clapTrap.vaulthunter_dot_exe( fragSnow.getName() );
    fragSnow.takeDamage( damage );
    damage = fragSnow.meleeAttack( clapTrap.getName() );
    clapTrap.takeDamage( damage );

    // Turn off the motherfuckers after showing the states
    std::cout << RED << "GOD" << EOC << ": A quick copy using my abilities." << std::endl;
    copyFragSnow = fragSnow;
    copyFragSnow.setName( "copy Frag Snow" );
    copyFragSnow.showState();
    std::cout << RED << "GOD" << EOC << ": Show me your states." << std::endl;
    clapTrap.showState();
    copyClapTrap.showState();
    fragSnow.showState();
    std::cout << RED << "GOD" << EOC << ": The show is over i will destroy u all." << std::endl;

    return 0;
}