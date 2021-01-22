/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 10:59:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


//--------------- Static Attributes:


unsigned int const      ScavTrap::_nbrChallenges = 5;
std::string const       ScavTrap::_challenges[ _nbrChallenges ] = {
    "Bring me 10 heads of Dark Siders.",
    "Defeat Ivar the Boneless in a Melee Combat.",
    "This One is HARD!!! try to flirt with Serena <3.",
    "Unlucky! you will pass over my DEAD BODY.",
    "Answer FAST!! Which Disney Princess has the least amount of screen time?",
};

//--------------- Constructors:

ScavTrap::ScavTrap( void ) : ClapTrap(
        SC4V_TP,      // Type
        "Scav Snow",  // Name
        1,            // lvl
        100,          // HP
        50,           // EP
        100,          // Max HP
        50,           // Max EP
        20,           // Melee Atk Dmg
        15,           // Ranged Atk Dmg 
        3             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " at your service!, a random SC4V-TP that will make sure that no one shall pass your doors without a CHALLENGE!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(
        SC4V_TP,      // Type
        name,         // Name
        1,            // lvl
        100,          // HP
        50,           // EP
        100,          // Max HP
        50,           // max EP
        20,           // Melee Atk Dmg
        15,           // Ranged Atk Dmg
        3             // Armor Dmg Reduction
    )
{
    std::cout << " Hello! " << this->_name \
              << " at your service!, a SC4V-TP that will make sure that no one shall pass your doors without a CHALLENGE!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
    *this = src;
    std::cout << " Hello! " << this->_name \
              << " at your service!, a SC4V-TP copy that will make sure that no one shall pass your doors without a CHALLENGE!" << std::endl;
}

//--------------- Destructor:

ScavTrap::~ScavTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
};

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

//--------------- Challenge New Comer Special:

void            ScavTrap::challengeNewcomer( std::string const & target )
{
    std::string     message = "";

    if (this->_hitPoints == 0)
        message = "* I'm dead X( Seeing '" + target + "' pass my doors without passing the challenge is SAD :( *";
    else
    {
        if ( this->_energyPoints < 5 )
            message = "NO!NO!NO! I don't have enough Energy points to compile my challenge Code X(";
        else
        {
            this->_energyPoints -= 5;
            message = "* Chanllenge Mode Activated! * Prepare yourself " + target + ": " + _challenges[ rand() % ScavTrap::_nbrChallenges ];
        }
    }
    this->talk( message );
}
