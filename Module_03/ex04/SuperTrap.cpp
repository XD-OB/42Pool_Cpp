/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:34:43 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 15:49:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap( void ) :
    ClapTrap(
        SP3R_TP,      // Type
        "Super Snow", // Name
        1,            // lvl
        100,          // HP
        120,          // EP
        100,          // Max HP
        120,          // max EP
        60,           // Melee Atk Dmg
        20,           // Ranged Atk Dmg
        5             // Armor Dmg Reduction
    ),
    FragTrap(),
    NinjaTrap()
{
    std::cout << "Hi, You are so lucky to have me! I'm " << this->_name  \
              << " a random SP3R-TP, the MOST POWERFUL kind of trap." << std::endl;
}

SuperTrap::SuperTrap( std::string name ) :
    ClapTrap(
        SP3R_TP,      // Type
        name,         // Name
        1,            // lvl
        100,          // HP
        120,          // EP
        100,          // Max HP
        120,          // max EP
        60,           // Melee Atk Dmg
        20,           // Ranged Atk Dmg
        5             // Armor Dmg Reduction
    ),
    FragTrap( name ),
    NinjaTrap( name )
{
    std::cout << " Hi, You are so lucky to have me! I'm " << FragTrap::_name  \
              << " a SP3R-TP, the MOST POWERFUL kind of traps." << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src ) :
    ClapTrap(src)
{
    *this = src;
    std::cout << "Hi, You are so lucky to have me! I'm " << FragTrap::_name  \
              << " a SP3R-TP copy, the MOST POWERFUL kind of traps." << std::endl;
}

//--------------- Destructor:

SuperTrap::~SuperTrap( void )
{
    if ( this->_hitPoints > 0 )
        this->talk("* CRASH TRASH MACHINE SOUND * Don't Put me in the Trash!! MASTER plzzzz! AAAAaaa...");
    else
        this->talk("* CRASH TRASH MACHINE SOUND * PipOI ZZZZZ ... TrgShSSS ");
}

//--------------- Operations:

SuperTrap &      SuperTrap::operator=( SuperTrap const & rhs )
{
    std::cout << CYAN << "[Copying infos complete] " << EOC \
              << rhs.getName() << " ---> " << this->_name << std::endl;
    if (this != &rhs) ClapTrap::operator=(rhs);
    return *this;
}
