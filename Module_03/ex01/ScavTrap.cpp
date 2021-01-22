/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 08:48:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


//--------------- Static Attributes:

unsigned int const      ScavTrap::_maxHitPoints = 100;
unsigned int const      ScavTrap::_maxEnergyPoints = 50;
unsigned int const      ScavTrap::_rangedAttackDmg = 15;
unsigned int const      ScavTrap::_meleeAttackDmg = 20;
unsigned int const      ScavTrap::_armorDamageReduction = 3;
unsigned int const      ScavTrap::_nbrChallenges = 5;
std::string const       ScavTrap::_challenges[ _nbrChallenges ] = {
    "Bring me 10 heads of Dark Siders.",
    "Defeat Ivar the Boneless in a Melee Combat.",
    "This One is HARD!!! try to flirt with Serena <3.",
    "Unlucky! you will pass over my DEAD BODY.",
    "Answer FAST!! Which Disney Princess has the least amount of screen time?",
};

//--------------- Constructors:

ScavTrap::ScavTrap( void ) :
    _name("Scav Snow"),
    _hitPoints(ScavTrap::_maxHitPoints),
    _energyPoints(ScavTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new SC4V-TP bot, a Class C Hyperion Robot. I have no name just a random SC4V!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :
    _name(name),
    _hitPoints(ScavTrap::_maxHitPoints),
    _energyPoints(ScavTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new SC4V-TP bot, a Class C Hyperion Robot. My name is " << this->_name << "." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
    *this = src;
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new SC4V-TP bot, a Class C Hyperion Robot. I'm just a duplicate of " << this->_name << "." << std::endl;
}

//--------------- Destructor:

ScavTrap::~ScavTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
};

//--------------- Accessors:

std::string     ScavTrap::getName( void ) const
{
    return this->_name;
}

unsigned int    ScavTrap::getLevel( void ) const
{
    return this->_level;
}

unsigned int    ScavTrap::getHitPoints( void ) const
{
    return this->_hitPoints;
}

unsigned int    ScavTrap::getEnergyPoints( void ) const
{
    return this->_energyPoints;
}

void            ScavTrap::setName( std::string name )
{
    std::cout << CYAN << "[Changing name complete] " << EOC \
              << this->_name << " ---> " << name << std::endl;
    this->_name = name;
}

//--------------- Operations:

ScavTrap &      ScavTrap::operator=( ScavTrap const & rhs )
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

//--------------- Functions Members:

void            ScavTrap::talk( std::string const message ) const
{
    std::cout << WHITE << "SC4V-TP[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" \
              << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" \
              << EOC << ": " << message << std::endl;
}

void            ScavTrap::showState( void ) const
{
    std::cout << WHITE << "SC4V-TP[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" \
              << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" << std::endl;
}

//--------------- Attacks:

unsigned int    ScavTrap::meleeAttack( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I wish if a can attack but i'm destroyed! *");
        return 0; 
    }
    this->talk("Take that!");
    std::cout << "* " << this->_name << " attacks " << target << " with melee attack, causing " \
              << _meleeAttackDmg << " damage points! *" << std::endl;
    return _meleeAttackDmg;
}

unsigned int    ScavTrap::rangedAttack( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I wish if a can attack but i'm destroyed! *");
        return 0; 
    }
    this->talk("Hot potato!");
    std::cout << "* " << this->_name << " attacks " << target << " at range, causing " \
              << _rangedAttackDmg << " damage points! *" << std::endl;
    return _rangedAttackDmg;
}

void            ScavTrap::takeDamage( unsigned int amount )
{
    unsigned int    hit = 0;

    if ( !amount ) return;

    if ( amount > ScavTrap::_armorDamageReduction )
        hit = amount - ScavTrap::_armorDamageReduction;

    if ( _hitPoints == 0 )
        this->talk("Already Dead :/");
    else
    {
        if ( hit > 0 )
        {
            if ( _hitPoints > hit )
            {
                _hitPoints -= hit;
                this->talk("Aaaaaaahhh!!!");
            }
            else
            {
                _hitPoints = 0;
                this->talk("No more doors to guard i'm DEAD X(");
            }
            std::cout << "* receive " << hit <<" damage points! *" << std::endl;
        }
        else
            this->talk("* BLOCK the attack * Ridiculous Hhhh ??");
    }
}

bool            ScavTrap::beRepaired( unsigned int amount )
{
    unsigned int    healing = amount;

    if ( amount > this->_energyPoints )
    {
        this->talk("Oh NOOO! I can't heal myself, I dont have enough Energy points!");
        return false;
    }

    if ( amount > 100 - this->_hitPoints ) healing = 100 - this->_hitPoints;
    this->_hitPoints += healing;
    this->_energyPoints -= healing;
    this->talk("YES, repairing myself :)");
    std::cout << "* +" << healing << "HP  -" << healing << "EP *" << std::endl;
    return true;
}

//--------------- Challenge New Comer Special:

void            ScavTrap::challengeNewcomer( std::string const & target )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm dead X( Seeing '" + target + "' pass my doors without passing the challenge is SAD :( *";
    else
    {
        if ( _energyPoints < 25 )
            message = "NO!NO!NO! I don't have enough Energy points to compile my challenge Code X(";
        else
            message = "* Chanllenge Mode Activated! * Prepare yourself " + target + ": " + _challenges[ rand() % ScavTrap::_nbrChallenges ];
    }
    this->talk( message );
}
