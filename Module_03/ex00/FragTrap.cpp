/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:29:47 by obelouch         ###   ########.fr       */
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
    { "Laser Inferno", 80, &FragTrap::laserInferno },
    { "Torgue Fiesta", 85, &FragTrap::torgueFiesta },
    { "One Shot Wonder", 60, &FragTrap::oneShotWonder },
};

//--------------- Constructors:

FragTrap::FragTrap( void ) :
    _name("Frag Snow"),
    _hitPoints(FragTrap::_maxHitPoints),
    _energyPoints(FragTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new FR4G-TP bot, a Class C Hyperion Robot. I have no name just a random Fr4g!" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) :
    _name(name),
    _hitPoints(FragTrap::_maxHitPoints),
    _energyPoints(FragTrap::_maxEnergyPoints),
    _level(1)
{
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new FR4G-TP bot, a Class C Hyperion Robot. My name is " << this->_name << "." << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
    *this = src;
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new FR4G-TP bot, a Class C Hyperion Robot. I'm just a duplicate of " << this->_name << "." << std::endl;
}

//--------------- Destructor:

FragTrap::~FragTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
};

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

unsigned int    FragTrap::getMeleeAttackDmg( void ) const
{
    return FragTrap::_meleeAttackDmg;
}

unsigned int    FragTrap::getRangedAttackDmg( void ) const
{
    return FragTrap::_rangedAttackDmg;
}

void            FragTrap::setName( std::string name )
{
    std::cout << CYAN << "[Changing name complete] " << EOC \
              << this->_name << " ---> " << name << std::endl;
    this->_name = name;
}

//--------------- Operations:

FragTrap &      FragTrap::operator=( FragTrap const & rhs )
{
    std::cout << CYAN << "[Copying infos complete] " << EOC \
              << rhs.getName() << std::endl;
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

void            FragTrap::talk( std::string const message ) const
{
    std::cout << WHITE << "FR4G-TP[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" \
              << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" \
              << EOC << ": " << message << std::endl;
}

void            FragTrap::showState( void ) const
{
    std::cout << WHITE << "FR4G-TP[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" \
              << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" << EOC << std::endl;
}

//--------------- Attacks:

unsigned int    FragTrap::meleeAttack( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I wish if a can attack but i'm destroyed! *");
        return 0; 
    }
    this->talk("Heyyah!!");
    std::cout << "* " << this->_name << " attacks " << target << " with melee attack, causing " \
              << _meleeAttackDmg << " damage points! *" << std::endl;
    return _meleeAttackDmg;
}

unsigned int    FragTrap::rangedAttack( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I wish if a can attack but i'm destroyed! *");
        return 0; 
    }
    this->talk("Oh! Take that Bullet!");
    std::cout << "* " << this->_name << " attacks " << target << " at range, causing " \
              << _rangedAttackDmg << " damage points! *" << std::endl;
    return _rangedAttackDmg;
}

void            FragTrap::takeDamage( unsigned int amount )
{
    unsigned int    hit = 0;

    if ( !amount ) return;

    if ( amount > FragTrap::_armorDamageReduction )
        hit = amount - FragTrap::_armorDamageReduction;

    if ( _hitPoints == 0 )
        this->talk("DZBZZZZZ I'm Already DEAD x_x");
    else
    {
        if ( hit > 0 )
        {
            if ( _hitPoints > hit )
            {
                _hitPoints -= hit;
                this->talk("Extra ouch!!!");
            }
            else
            {
                _hitPoints = 0;
                this->talk("Woah! Oh! Jeez! I'AM DEAD :(");
            }
            std::cout << "* receive " << hit <<" damage points! *" << std::endl;
        }
        else
            this->talk("* BLOCK the attack * Ha ha ha! I didn't feel anything ??");
    }
}

bool            FragTrap::beRepaired( unsigned int amount )
{
    unsigned int    healing = amount;

    if ( amount > this->_energyPoints )
    {
        this->talk("Oh NOOO! I can't heal myself, I dont have enough Energy points!");
        return false;
    }

    if ( amount > FragTrap::_maxHitPoints - this->_hitPoints )
        healing = FragTrap::_maxHitPoints - this->_hitPoints;
    this->_hitPoints += healing;
    this->_energyPoints -= healing;
    this->talk("YES, repairing myself :)");
    std::cout << "* +" << healing << "HP  -" << healing << "EP *" << std::endl;
    return true;
}

//--------------- VAULTHUNTER.EXE:

unsigned int    FragTrap::vaulthunter_dot_exe( std::string const & target )
{
    if (this->_hitPoints == 0)
    {
        this->talk("* I have a rage to GO VAULTHUNTER.EXE mode but sadly i'm destroyed! :( *");
        return 0; 
    }

    if ( this->_energyPoints < 25 )
    {
        this->talk("NO!NO!NO! I don't have enough Energy points to compile my Combat Code X(");
        return 0;
    }

    /* initialize random seed: */
    srand (time(NULL));


    int     randIndex = rand() % FragTrap::_nbrSpecialAttacks;

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
