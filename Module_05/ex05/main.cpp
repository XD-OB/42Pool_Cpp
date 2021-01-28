/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 03:12:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 18:14:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <stdexcept>
#include <iostream>
#include <cstdlib>


int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy ep 6: 'Long Waiting List in the Central' -----------" \
              << std::endl << std::endl;

    CentralBureaucracy      mo9ata3a;

    // empty central
    mo9ata3a.doBureaucracy();

    Bureaucrat      oussama("Oussama", 1);
    Bureaucrat      ilyas("Ilyas", 4);
    Bureaucrat      souad("Souad", 5);
    Bureaucrat      anas("Anas", 8);
    Bureaucrat      ali("Ali", 15);
    Bureaucrat      youssef("Youssef", 6);
    Bureaucrat      aya("Aya", 12);
    Bureaucrat      ikram("Ikram", 11);
    Bureaucrat      said("Said", 9);
    Bureaucrat      mohammed("Mohammed", 10);
    
    std::cout << mo9ata3a << std::endl;

    // Feed Bureaucrats
    mo9ata3a.feed( oussama );
    mo9ata3a.feed( ilyas );
    mo9ata3a.feed( souad );
    mo9ata3a.feed( anas );
    mo9ata3a.feed( ali );
    mo9ata3a.feed( youssef );
    mo9ata3a.feed( aya );
    mo9ata3a.feed( ikram );
    mo9ata3a.feed( said );
    mo9ata3a.feed( mohammed );

    std::cout << mo9ata3a << std::endl;
    
    // no targets
    mo9ata3a.doBureaucracy();

    // Feed Targets
    mo9ata3a.queueUp("Kriss");
	mo9ata3a.queueUp("Kelvin");
	mo9ata3a.queueUp("Keryan");
	mo9ata3a.queueUp("Kenjy");
	mo9ata3a.queueUp("Kassim");
	mo9ata3a.queueUp("Kerim");
	mo9ata3a.queueUp("Kameron");
	mo9ata3a.queueUp("Killyan");
	mo9ata3a.queueUp("Kyliane");
	mo9ata3a.queueUp("Kerem");
	mo9ata3a.queueUp("Kevin");
	mo9ata3a.queueUp("Kentin");
	mo9ata3a.queueUp("Khalis");
	mo9ata3a.queueUp("Kylan");

    return 0;
}