/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:09:04 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:33:31 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

//--------------- Constructors:

ClapTrap::ClapTrap( void ) :
    _type(FR4G_TP),
    _name("Frag Snow"),
    _level(1),
    _hitPoints(100),
    _energyPoints(100),
    _maxHitPoints(100),
    _maxEnergyPoints(100),
    _meleeAttackDmg(30),
    _rangedAttackDmg(20),
    _armorDamageReduction(5)
{
    // By default we create a FragTrap
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new random Clap Trap bot, a Class C Hyperion Robot." << std::endl;
}

ClapTrap::ClapTrap(
        std::string const & type,
        std::string const & name,
        unsigned int level,
        unsigned int hitpoints,
        unsigned int energyPoints,
        unsigned int maxHitPoints,
        unsigned int maxEnergyPoints,
        unsigned int meleeAttackDmg,
        unsigned int rangedAttackDmg,
        unsigned int armorDamageReduction
    ) :
    _type(type),
    _name(name),
    _level(level),
    _hitPoints(hitpoints),
    _energyPoints(energyPoints),
    _maxHitPoints(maxHitPoints),
    _maxEnergyPoints(maxEnergyPoints),
    _meleeAttackDmg(meleeAttackDmg),
    _rangedAttackDmg(rangedAttackDmg),
    _armorDamageReduction(armorDamageReduction)
{
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your new pre-ordered Clap Trap bot, a Class C Hyperion Robot." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    *this = src;
    std::cout << CYAN << "[Booting sequence complete]" << EOC \
              << " Hello! I am your Duplicate Clap Trap bot, a Class C Hyperion Robot." << std::endl;
}

//--------------- Destructor:

ClapTrap::~ClapTrap( void )
{
    this->talk("* ClapTrap program is destructed *");
}

//--------------- Accessors:

std::string     ClapTrap::getType( void ) const
{
    return this->_type;
}


std::string     ClapTrap::getName( void ) const
{
    return this->_name;
}

unsigned int    ClapTrap::getLevel( void ) const
{
    return this->_level;
}

unsigned int    ClapTrap::getHitPoints( void ) const
{
    return this->_hitPoints;
}

unsigned int    ClapTrap::getEnergyPoints( void ) const
{
    return this->_energyPoints;
}

unsigned int    ClapTrap::getMaxHitPoints( void ) const
{
    return this->_maxHitPoints;
}

unsigned int    ClapTrap::getMaxEnergyPoints( void ) const
{
    return this->_maxEnergyPoints;
}

unsigned int    ClapTrap::getMeleeAttackDmg( void ) const
{
    return this->_meleeAttackDmg;
}

unsigned int    ClapTrap::getRangedAttackDmg( void ) const
{
    return this->_rangedAttackDmg;
}

unsigned int    ClapTrap::getArmorDamageReduction( void ) const
{
    return this->_armorDamageReduction;
}

void            ClapTrap::setName( std::string name )
{
    std::cout << CYAN << "[Changing name complete] " << EOC \
              << this->_name << " ---> " << name << std::endl;
    this->_name = name;
}

//--------------- Operations:

ClapTrap &      ClapTrap::operator=( ClapTrap const & rhs )
{
    std::cout << CYAN << "[Copying infos complete] " << EOC \
              << rhs.getName() << " ---> " << this->_name << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_name = rhs.getName();
        this->_level = rhs.getLevel();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_maxHitPoints = rhs.getMaxHitPoints();
        this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
        this->_meleeAttackDmg = rhs.getMeleeAttackDmg();
        this->_rangedAttackDmg = rhs.getRangedAttackDmg();
        this->_armorDamageReduction = rhs.getArmorDamageReduction();
    }
    return *this;
}

//--------------- Functions Members:

void            ClapTrap::talk( std::string const message ) const
{
    std::cout << WHITE << this->_type << "[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" << EOC << ": " << message << std::endl;
}

void            ClapTrap::showState( void ) const
{
    std::cout << WHITE << this->_type << "[ " << YELLOW << this->_name << WHITE << " ] < " \
              << MAGENTA << this->_level << WHITE << " > (" << RED << this->_hitPoints << WHITE << " HP) (" \
              << BLUE << this->_energyPoints << WHITE << " EP)" << EOC << std::endl;
}

//--------------- Attacks:

unsigned int    ClapTrap::meleeAttack( std::string const & target )
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

unsigned int    ClapTrap::rangedAttack( std::string const & target )
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

void            ClapTrap::takeDamage( unsigned int amount )
{
    unsigned int    hit = 0;

    if ( !amount ) return;

    if ( amount > this->_armorDamageReduction )
        hit = amount - this->_armorDamageReduction;

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

bool            ClapTrap::beRepaired( unsigned int amount )
{
    unsigned int    healing = amount;

    if ( amount > this->_energyPoints )
    {
        this->talk("Oh NOOO! I can't heal myself, I dont have enough Energy points!");
        return false;
    }

    if ( amount > this->_maxHitPoints - this->_hitPoints )
        healing = this->_maxHitPoints - this->_hitPoints;
    this->_hitPoints += healing;
    this->_energyPoints -= healing;
    this->talk("YES, repairing myself :)");
    std::cout << "* +" << healing << "HP  -" << healing << "EP *" << std::endl;
    return true;
}