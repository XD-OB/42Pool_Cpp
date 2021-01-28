/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 03:12:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 19:33:16 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <stdexcept>
#include <iostream>
#include <cstdlib>


int     main( void )
{
    std::cout << "=========== In a world dominated by Bureaucracy ep 6: 'Long Waiting List in the Central' ===========" \
              << std::endl << std::endl;

    CentralBureaucracy      mo9ata3a;

    //// Principal List
    // Part 1 -17-
    Bureaucrat      oussama("Oussama", 1);
    Bureaucrat      ilyas("Ilyas", 4);
    Bureaucrat      souad("Souad", 5);
    Bureaucrat      anas("Anas", 8);
    Bureaucrat      ali("Ali", 15);
    Bureaucrat      youssef("Youssef", 6);
    Bureaucrat      aya("Aya", 12);
    Bureaucrat      ikram("Ikram", 11);
    Bureaucrat      said("Said", 9);
    Bureaucrat      mohammed("Mohammed", 13);
    Bureaucrat      manal("Manal", 40);
    Bureaucrat      john("John", 100);
    Bureaucrat      amjad("Amjad", 45);
    Bureaucrat      douae("Douae", 2);
    Bureaucrat      karim("Karim", 3);
    Bureaucrat      yassine("Yassine", 7);
    Bureaucrat      raphael("Raphael", 10);
    // Part 2 -6-
    Bureaucrat      antony("Antony", 9);
    Bureaucrat      dan("Dan", 8);
    Bureaucrat      abdelhak("Abdelhak", 6);
    //// Waiting List
    Bureaucrat      tony("Tony", 5);
    Bureaucrat      abdellah("abdellah", 16);
    Bureaucrat      fatiha("Fatiha", 20);


    // Empty central
    std::cout << "------ Empty Central Bureaucracy: -------------" << std::endl;
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << "-----------------------------------------------" << std::endl;

    // Feed bureaucrats (part1)
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
    mo9ata3a.feed( manal );
    mo9ata3a.feed( john );
    mo9ata3a.feed( amjad );
    mo9ata3a.feed( mohammed );
    mo9ata3a.feed( manal );
    mo9ata3a.feed( john );
    mo9ata3a.feed( amjad );
    mo9ata3a.feed( douae );
    mo9ata3a.feed( karim );
    mo9ata3a.feed( yassine );
    mo9ata3a.feed( raphael );

    
    // No targets
    std::cout << "------ No targets in Central Bureaucracy: -------" << std::endl;
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << "-------------------------------------------------" << std::endl;

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

    
    // Nice central
    std::cout << "------ Nice Central Bureaucracy: ----------------" << std::endl;
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << "-------------------------------------------------" << std::endl;

    // Fire a Bureaucrat with no one in the Waiting list:
    std::cout << " ------ try to fire a bureaucrat in Central Bureaucracy: ---" << std::endl;
    mo9ata3a.fireBureaucrat();
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
     std::cout << "-----------------------------------------------------------" << std::endl;

    // Feed bureaucrats (part2)
    mo9ata3a.feed( antony);
    mo9ata3a.feed( dan );
    mo9ata3a.feed( abdelhak );
    mo9ata3a.feed( tony );
    mo9ata3a.feed( abdellah );
    mo9ata3a.feed( fatiha );

    // More bureaucrats
    std::cout << "------ More Bureaucrats in Central Bureaucracy: -----" << std::endl;
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << "-----------------------------------------------------" << std::endl;

    // Fire a Bureaucrat with no one in the Waiting list:
    std::cout << " ------ Fire a bureaucrat in Central Bureaucracy: ---" << std::endl;
    mo9ata3a.fireBureaucrat();
    std::cout << mo9ata3a << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;

    return 0;
}