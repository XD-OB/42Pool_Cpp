/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:42:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 22:34:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>


int     main( void )
{
    ISpaceMarine *  oussama = new TacticalMarine;
    ISpaceMarine *  anas = new AssaultTerminator;
    ISpaceMarine *  ilyas;
    ISpaceMarine *  souad;
    ISpaceMarine *  agent;

    // Declare squads
    ISquad *        vlc = new Squad;
    ISquad *        clv;
    
    // Create clones
    ilyas = oussama->clone();
    souad = anas->clone();

    // Push agents into the squad VLC
    vlc->push(oussama);
    vlc->push(anas);
    vlc->push(ilyas);
    vlc->push(souad);
    // Try to add duplicat
    vlc->push(oussama);

    // Print the number of ppl in clv:
    std::cout << "In clv there is " << vlc->getCount() << " agents." << std::endl;

    for ( int i = 0; i < vlc->getCount(); ++i ) {
        agent = vlc->getUnit(i);
        agent->battleCry();
        agent->rangedAttack();
        agent->meleeAttack();
    }

    clv = vlc;

    // Print the number of ppl in clv:
    std::cout << "In clv there is " << clv->getCount() << " agents." << std::endl;

    for ( int i = 0; i < clv->getCount(); ++i ) {
        agent = clv->getUnit(i);
        agent->battleCry();
    }

    delete vlc;

    return 0;
}