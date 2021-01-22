/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 15:08:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


//--------------- Special Attacks Structure:

struct t_specialAttack
{
    std::string     name;
    unsigned int    damage;
    unsigned int    (FragTrap::*f) ( std::string const & );

};

//--------------- Static Attributes:

unsigned int const      FragTrap::_nbrSpecialAttacks = 8;
t_specialAttack         FragTrap::_attacks[ _nbrSpecialAttacks ] = {
    { "Funzerker", 75, &FragTrap::funzerker },
    { "Blight Bot", 40, &FragTrap::blightBot },
    { "Gun Wizard", 65, &FragTrap::gunWizard },
    { "Minion Trap", 45, &FragTrap::minionTrap },
    { "Meat Unicycle", 50, &FragTrap::meatUnicycle },
    { "Laser Inferno", 80, &FragTrap::laserInferno },
    { "Torgue Fiesta", 85, &FragTrap::torgueFiesta },
    { "One Shot Wonder", 60, &FragTrap::oneShotWonder },
};

//--------------- Constructors:

FragTrap::FragTrap( void ) : ClapTrap(
        FR4G_TP,      // Type
        "Frag Snow",  // Name
        1,            // lvl
        100,          // HP
        100,          // EP
        100,          // Max HP
        100,          // max EP
        30,           // Melee Atk Dmg
        20,           // Ranged Atk Dmg
        5             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " your personal weapon!, a random FR4G-TP that will destruct all your Ennemies!! Let the party begin ;)" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(
        FR4G_TP,      // Type
        name,         // Name
        1,            // lvl
        100,          // HP
        100,          // EP
        100,          // Max HP
        100,          // max EP
        30,           // Melee Atk Dmg
        20,           // Ranged Atk Dmg
        5             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " your personal weapon!, a FR4G-TP that will destruct all your Ennemies!! Let the party begin ;)" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
    *this = src;
    std::cout << " Hello! " << this->_name \
              << " your personal weapon!, a FR4G-TP copy that will destruct all your Ennemies!! Let the party begin ;)" << std::endl;
}

//--------------- Destructor:

FragTrap::~FragTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
};

//--------------- Operations:

FragTrap &      FragTrap::operator=( FragTrap const & rhs )
{
    std::cout << CYAN << "[Copying infos complete] " << EOC \
              << rhs.getName() << " ---> " << this->_name << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_level = rhs.getLevel();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
    }
    return *this;
}

//--------------- VAULTHUNTER.EXE:

unsigned int    FragTrap::vaulthunter_dot_exe( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I have a rage to GO VAULTHUNTER.EXE mode but sadly i'm destroyed! :( *");
        return 0; 
    }

    int     randIndex = rand() % FragTrap::_nbrSpecialAttacks;

    if ( this->_energyPoints < 25 )
    {
        this->talk("NO!NO!NO! I don't have enough Energy points to compile my Combat Code X(");
        return 0;
    }

    this->talk("* VAULTHUNTER.EXE Activated! * Things are about to get awesome!");
    this->_energyPoints -= 25;
    (this->*(_attacks[ randIndex ].f))( target );
    return this->_attacks[ randIndex ].damage;
}

unsigned int    FragTrap::funzerker( std::string const & target )
{
    this->talk("I'm a sexy dinosaur! Rawr!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the FUNZERKER random special attack. [75 dmg pts]" << std::endl;
    return 75;
}

unsigned int    FragTrap::blightBot( std::string const & target )
{
    this->talk("Burn them, my mini-phoenix!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the BLINGHT BOT random special attack. [40 dmg pts]" << std::endl;
    return 40;
}

unsigned int    FragTrap::gunWizard( std::string const & target )
{
    this->talk("Uh, how do I cast magic missile? Avada kedavra!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the GUN WIZARD random special attack. [65 dmg pts]" << std::endl;
    return 65;
}

unsigned int    FragTrap::minionTrap( std::string const & target )
{
    this->talk("Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pewpew!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the MINION TRAP random special attack. [45 dmg pts]" << std::endl;
    return 45;
}

unsigned int    FragTrap::meatUnicycle( std::string const & target )
{
    this->talk("* unintelligible snarling * I AM ON FIRE!!! OH GOD, PUT ME OUT!!!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the MEAT UNICYCLE random special attack. [50 dmg pts]" << std::endl;
    return 50;
}

unsigned int    FragTrap::laserInferno( std::string const & target )
{
    this->talk("Laaasers! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the LASER INFERNO random special attack. [80 dmg pts]" << std::endl;
    return 80;
}

unsigned int    FragTrap::torgueFiesta( std::string const & target )
{
    this->talk("How many ways can I say... THROWING GRENADE?!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the TORGUE FIESTA random special attack. [85 dmg pts]" << std::endl;
    return 85;
}

unsigned int    FragTrap::oneShotWonder( std::string const & target )
{
    this->talk("All these bullets in just one shot! Kill, reload! Kill, reload! KILL! RELOAD!");
    std::cout << "* " <<  this->_name << " attack " << target << " using the ONE SHOT WONDER random special attack. [60 dmg pts]" << std::endl;
    return 60;
}
