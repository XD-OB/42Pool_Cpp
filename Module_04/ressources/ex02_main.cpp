/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:42:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 16:44:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int     main( void )
{
    ISpaceMarine *  bob = new TacticalMarine;
    ISpaceMarine *  jim = new AssaultTerminator;
    ISquad *        vlc = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    
    for ( int i = 0; i < vlc->getCount(); ++i ) {
        ISpaceMarine*   cur = vlc->getUnit(i);
        
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    
    delete vlc;
    
    return 0;
}