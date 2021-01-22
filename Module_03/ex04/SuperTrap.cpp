/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:34:43 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 13:00:50 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

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

}