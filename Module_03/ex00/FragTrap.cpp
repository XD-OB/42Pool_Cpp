/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/13 16:37:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>


//--------------- Special Attacks Structure:

struct t_specialAttack
{
    std::string     name;
    unsigned int    damage;
    void            (FragTrap::*f) ( std::string const & );

};

//--------------- Static Attributes:

unsigned int const      FragTrap::_maxHitPoints = 100;
unsigned int const      FragTrap::_maxEnergyPoints = 100;
unsigned int const      FragTrap::_rangedAttackDmg = 20;
unsigned int const      FragTrap::_meleeAttackDmg = 30;
unsigned int const      FragTrap::_armorDamageReduction = 5;
unsigned int const      FragTrap::_nbrSpecialAttacks = 8;
t_specialAttack         FragTrap::_attacks[ _nbrSpecialAttacks ] = {
    { "Funzerker", 75, &FragTrap::funzerker },
    { "Blight Bot", 40, &FragTrap::blightBot },
    { "Gun Wizard", 65, &FragTrap::gunWizard },
    { "Minion Trap", 45, &FragTrap::minionTrap },
    { "Meat Unicycle", 50, &FragTrap::meatUnicycle },
    { "Laser Inferno", 100, &FragTrap::laserInferno },
    { "Torgue Fiesta", 90, &FragTrap::torgueFiesta },
    { "One Shot Wonder", 85, &FragTrap::oneShotWonder },
};

//--------------- Constructors:

FragTrap::FragTrap( void ) :
    _name("Frag Snow"),
    _hitPoints(FragTrap::_maxHitPoints),
    _energyPoints(FragTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << "*Random Fr4g-TP* under the name " << this->_name << ":" << std::endl \
              << "[Booting sequence complete] Hello! I am your new FR4G-TP bot " \
              << ", a Class C Hyperion Robot." << std::endl \
              << "I have no name just a random Fr$g that do some Traps !" << std::endl;
}

FragTrap::FragTrap( std::string name ) :
    _name(name),
    _hitPoints(FragTrap::_maxHitPoints),
    _energyPoints(FragTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << name << ": [Booting sequence complete] " << std::endl \
              << "Hello! I am your new FR4G-TP bot " \
              << ", a Class C Hyperion Robot." << std::endl \
              << "Let's get this party started!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
    *this = src;
    std::cout << "Copy " << src.getName() \
              << ": [Booting sequence complete] " << std::endl \
              << "Hello! I am your new FR4G-TP bot " \
              << ", a Class C Hyperion Robot." << std::endl \
              << "Wait I'm a duplicate :( !" << std::endl;
}

//--------------- Destructor:

FragTrap::~FragTrap( void )
{
    std::cout << this->_name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD! ..." << std::endl;
};

//--------------- Private memeber functions:

void            FragTrap::_showState( std::string const message ) const
{
    std::cout << " FR4G-TP[" << this->_name << "] <" << this->_level << "> (" \
              << this->_hitPoints << " HP) (" << this->_energyPoints << " EP)";
    if ( ! msg.empty() )
    {
        std::cout << ": " << message << 
    }
}

//--------------- Accessors:

std::string     FragTrap::getName( void ) const
{
    return this->_name;
}

unsigned int    FragTrap::getLevel( void ) const
{
    return this->_level;
}

unsigned int    FragTrap::getHitPoints( void ) const
{
    return this->_hitPoints;
}

unsigned int    FragTrap::getEnergyPoints( void ) const
{
    return this->_energyPoints;
}

//--------------- Operations:

FragTrap &      FragTrap::operator=( FragTrap const & rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_level = rhs.getLevel();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
    }
    return *this;
}

//--------------- Attacks:

void    FragTrap::meleeAttack( std::string const & target )
{
    this->_showState();
    std::cout << ": Heyyah!!" << std::endl << "* attacks " << target \
              << " with melee attack, causing " << this->_meleeAttackDmg \
              << " damage points! *" << std::endl;
}

void    FragTrap::rangedAttack( std::string const & target )
{
    std::cout << "'Oh! Take that Bullet!'" << std::endl \
              << " FR4G-TP[" << this->_name << "] attacks " << target \
              << " at range, causing " << this->_rangedAttackDmg \
              << " damage points!" << std::endl;
}

void    FragTrap::takeDamage( unsigned int amount )
{
    unsigned int    hit = amount - FragTrap::_armorDamageReduction;

    if ( _hitPoints == 0 )
    {
        std::cout << "DZBZZZZZ I'm Already DEAD x_x" << std::endl;
        return ;
    }
    
    if ( hit > 0 )
    {
        if ( _hitPoints > hit )
        {
            _hitPoints -= hit;
            std::cout << "Extra ouch!!!" << std::endl;
        }
        else
        {
            _hitPoints = 0;
            std::cout << "Woah! Oh! Jeez! I'AM DEAD :(" << std::endl ;
        }
        std::cout << "FR4G-TP[" << this->_name << "](" << _hitPoints << " HP)(" \
                  << _energyPoints << " EP) receive " << hit <<" damage points!" << std::endl;
    }
    else
    {
        std::cout << "Ha ha ha! I didn't feel anything ??" << std::endl \
                  << "FR4G-TP[" << this->_name << "](" << _hitPoints << " HP)(" \
                  << _energyPoints <<" EP) *BLOCK* the attack" << std::endl;
    }
}

void    FragTrap::beRepaired( unsigned int amount )
{
    unsigned int    healing = amount;

    if ( amount > _energyPoints )
    {
        if ( amount > 100 - _hitPoints ) healing = 100 - _hitPoints;
        _hitPoints += healing;
        _energyPoints -= amount;
        std::cout << "YES, repairing myself :)" << std::endl \
                  << "FR4G-TP[" << this->_name << "](" << _hitPoints << " HP)(" << _energyPoints << " EP) +" \
                  << healing << "HP  -" << amount << "EP" << std::endl;
    }
    else
    {
        std::cout << "Oh NOOO! I can't heal myself, I dont have " << amount << " Energy points!" << std::endl \
                  << "FR4G-TP[" << this->_name << "](" << _hitPoints << " HP)(" << _energyPoints << " EP)" << std::endl;
    }
    
}

//--------------- VAULTHUNTER.EXE:

void    FragTrap::vaulthunter_dot_exe( std::string const & target )
{
    int     randIndex = rand() % FragTrap::_nbrSpecialAttacks;

    if ( _energyPoints < 25 )
        std::cout << "NO!NO!NO! I don't have enough Energy points to compile my Combat Code X(" << std::endl;
    else
    {
        std::cout << "* VAULTHUNTER.EXE Activated! * Things are about to get awesome!" << std::endl;
        _energyPoints -= 25;
        (this->*(_attacks[ randIndex ].f))( target );
        std::cout << "FR4G-TP[" << this->_name << "](" << this->_hitPoints << " HP)(" << this->_energyPoints \
                  << " EP) attack '" << target << "' Using the BLIGHT BOT random special attack. [-" \
                  << this->_attacks[ randIndex ].damage << " damage points]" << std::endl;
    }
}

void    FragTrap::funzerker( std::string const & target )
{
    std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
}

void    FragTrap::blightBot( std::string const & target )
{
    std::cout << "Burn them, my mini-phoenix!" << std::endl;
}

void    FragTrap::gunWizard( std::string const & target )
{
    std::cout << "Uh, how do I cast magic missile? Avada kedavra!" << std::endl;
}

void    FragTrap::minionTrap( std::string const & target )
{
    std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void    FragTrap::meatUnicycle( std::string const & target )
{
    std::cout << "* unintelligible snarling * I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << std::endl;
}

void    FragTrap::laserInferno( std::string const & target )
{
    std::cout << "Laaasers! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << std::endl;
}

void    FragTrap::torgueFiesta( std::string const & target )
{
    std::cout << "How many ways can I say... THROWING GRENADE?!" << std::endl;
}

void    FragTrap::oneShotWonder( std::string const & target )
{
    std::cout << "All these bullets in just one shot! Kill, reload! Kill, reload! KILL! RELOAD!" << std::endl;
}
