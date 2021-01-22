/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:18:31 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 17:09:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


//--------------- Constructors:

NinjaTrap::NinjaTrap( void ) : ClapTrap(
        IN4C_TP,      // Type
        "Ninja Snow",  // Name
        1,            // lvl
        60,           // HP
        120,          // EP
        60,           // Max HP
        120,          // max EP
        60,           // Melee Atk Dmg
        5,            // Ranged Atk Dmg
        0             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " your personal ninja!, a random IN4C that serve the legion! Viva la Robolution!" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(
        IN4C_TP,      // Type
        name,         // Name
        1,            // lvl
        60,           // HP
        120,          // EP
        60,           // Max HP
        120,          // max EP
        60,           // Melee Atk Dmg
        5,            // Ranged Atk Dmg
        0             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " your personal ninja!, a IN4C that serve the legion! Viva la Robolution!" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
    *this = src;
    std::cout << " Hello! " << this->_name \
              << " your personal ninja!, a IN4C copy that serve the legion! Viva la Robolution!" << std::endl;
}

//--------------- Destructor:

NinjaTrap::~NinjaTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
};

//--------------- Operations:

NinjaTrap &      NinjaTrap::operator=( NinjaTrap const & rhs )
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

//--------------- Spacial Attack:

unsigned int    NinjaTrap::ninjaShoebox( NinjaTrap & ninjaTrap )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm Dead X( A Dios Robolution :/ *";
    else
    {
        if ( this->_energyPoints < 20 )
            message = "No No I'm exausted! No energy left";
        else
        {
            this->_energyPoints -= 20;
            message = "* Sad dark face * " + ninjaTrap.getName() + " Beat it, fleshbag!";
        }
    }
    this->talk( message );
    return 40;
}

unsigned int    NinjaTrap::ninjaShoebox( ClapTrap & clapTrap )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm Dead X( A Dios Robolution :/ *";
    else
    {
        if ( this->_energyPoints < 20 )
            message = "No No I'm exausted! No energy left";
        else
        {
            this->_energyPoints -= 20;
            message = clapTrap.getName() + " FUCK u OlD ClAP, one kick for you and one for your childs!";
        }
    }
    this->talk( message );
    return 40;
}

unsigned int    NinjaTrap::ninjaShoebox( FragTrap & fragTrap )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm Dead X( A Dios Robolution :/ *";
    else
    {
        if ( this->_energyPoints < 30 )
            message = "No No I'm exausted! No energy left";
        else
        {
            this->_energyPoints -= 30;
            message = fragTrap.getName() + " See how our enemies crumble beneath the wheel of the claptrap Robolution!";
        }
    }
    this->talk( message );
    return 80;
}

unsigned int    NinjaTrap::ninjaShoebox( ScavTrap & scavTrap )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm Dead X( A Dios Robolution :/ *";
    else
    {
        if ( this->_energyPoints < 25 )
            message = "No No I'm exausted! No energy left";
        else
        {
            this->_energyPoints -= 25;
            message = scavTrap.getName() + " Under the new regime, all claptraps will be given liberty, and fraternity and NO DOOORS TO GUARD!!!";
        }
    }
    this->talk( message );
    return 90;
}
