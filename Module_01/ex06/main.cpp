/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:25:04 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 17:54:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int     main( void ) {
    {
        Weapon      club = Weapon("crude spiked club");
        HumanA      bob("Bob", club);
        
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon      club = Weapon("crude spiked club");
        HumanB      jim("Jim");
        
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}