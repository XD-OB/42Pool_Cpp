/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 04:48:55 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 04:53:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int     main( void )
{
    Character *     moi = new Character("moi");
    
    std::cout << *moi;
    
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    moi->equip(pr);
    std::cout << *moi;
    
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    
    moi->equip(pr);
    std::cout << *moi;
    
    moi->attack(b);
    std::cout << *moi;
    
    moi->attack(b);
    std::cout << *moi;
    
    return 0;
}