/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 04:48:55 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 03:08:17 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int     main( void )
{
    std::cout << "---- Oussama & the Westland ----" << std::endl;

    Character   oussama = Character("oussama");
    
    std::cout << oussama;
    
    std::cout << "* While oussama walk near an abandant tavern two ennemies appear from the desert *" << std::endl;

    Enemy *     superMutant = new SuperMutant();
    Enemy *     scorpion = new RadScorpion();

    std::cout << "oussama: SHIT!! i can't hide for long!" << std::endl;

    // Try to attack the Scorpion:
    oussama.attack( scorpion );

    std::cout << "* oussama while running in the tavern he found 2 weapons *" << std::endl;
    std::cout << "oussama: NICE, prepare to die u little shits!!" << std::endl;

    // Weapons
    AWeapon *   pr = new PlasmaRifle();
    AWeapon *   pf = new PowerFist();
    
    // Attack Enemies using PR
    oussama.equip( pr );
    std::cout << oussama;
    oussama.attack( superMutant );
    oussama.attack( scorpion );

    // Attack Enemies using PF
    oussama.equip( pf );
    std::cout << oussama;
    oussama.attack( superMutant );
    oussama.attack( scorpion );
    std::cout << oussama;

    // The Monsters escape away but a superMutant is created
    std::cout << "* The " << scorpion->getType() \
              << " and " << superMutant->getType() \
              << " died by a critical damage *" << std::endl;
    
    // Destroy Ennemies
    delete superMutant;
    delete scorpion;

    // Recover AP
    std::cout << oussama;
    oussama.recoverAP();

    // Destroy the weapon
    std::cout << "oussama: I'm done with this weapons i should destroy them before they land on wrong hands." << std::endl;
    delete pr;
    delete pf;


    return 0;
}