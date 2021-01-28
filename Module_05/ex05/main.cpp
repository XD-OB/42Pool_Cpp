/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 03:12:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 22:03:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <stdexcept>
#include <iostream>
#include <cstdlib>

// ------------- Color Macros:
# define     BLACK   "\033[30;1m"
# define     RED    "\033[31;1m"
# define     GREEN   "\033[32;1m"
# define     YELLOW  "\033[33;1m"
# define     BLUE    "\033[34;1m"
# define     MAGENTA "\033[35;1m"
# define     CYAN    "\033[36;1m"
# define     WHITE   "\033[37;1m"
// End of Color:
# define     EOC    "\033[0m"
//-----------------------------


int     main( void )
{
    std::cout << MAGENTA << "=========== In a world dominated by Bureaucracy ep 6: 'Long Waiting List in the Central' ===========" \
              << EOC << std::endl << std::endl;

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
    // Part 2
    Bureaucrat      hajar("Hajar", 14);
    Bureaucrat      leila("Leila", 6);
    // interim employee
    Bureaucrat      interimEmployee("interim employee", 11);
    

// Empty central
    std::cout << GREEN << "------ Empty Central Bureaucracy: -------------"
              << EOC << std::endl;
    std::cout << mo9ata3a;
    std::cout << "-- Work:" << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << GREEN << "-----------------------------------------------" 
              << EOC << std::endl << std::endl;


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
    mo9ata3a.feed( douae );
    mo9ata3a.feed( karim );
    mo9ata3a.feed( yassine );
    mo9ata3a.feed( raphael );

    
// No targets
    std::cout << GREEN << "------ No targets in Central Bureaucracy: -------"
              << EOC << std::endl;
    std::cout << mo9ata3a;
    std::cout << "-- Work:" << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << GREEN << "-------------------------------------------------" 
              << EOC << std::endl << std::endl;


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
    std::cout << GREEN << "------ Nice Central Bureaucracy: ----------------" 
              << EOC << std::endl;
    std::cout << mo9ata3a;
    std::cout << "-- Work:" << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << GREEN << "-------------------------------------------------" 
              << EOC << std::endl << std::endl;

// Fire a Bureaucrat with no one in the Waiting list:
    std::cout << GREEN << " ------ try to fire a bureaucrat in Central Bureaucracy: --------"
              << EOC << std::endl;
    mo9ata3a.fireBureaucrat();
    std::cout << mo9ata3a;
    std::cout << GREEN << "-----------------------------------------------------------------"
              << EOC << std::endl << std::endl;

    // Feed bureaucrats (part2) 24
    for ( int i = 0; i < 23; i++ )
        mo9ata3a.feed( interimEmployee );
    mo9ata3a.feed( hajar );
    mo9ata3a.feed( leila );
    

// More bureaucrats
    std::cout << GREEN << "------ More Bureaucrats in Central Bureaucracy: -----" \
              << EOC << std::endl;
    std::cout << mo9ata3a;
    std::cout << "-- Work:" << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << GREEN << "-----------------------------------------------------" \
              << EOC << std::endl << std::endl;

// Fire a Bureaucrat:
    std::cout << GREEN << " ------ Fire a bureaucrat in Central Bureaucracy: ---" \
              << EOC << std::endl;
    mo9ata3a.fireBureaucrat();
    std::cout << mo9ata3a;
    std::cout << "-- Work:" << std::endl;
    mo9ata3a.doBureaucracy();
    std::cout << GREEN << "-----------------------------------------------------" \
              << EOC << std::endl << std::endl;

    return 0;
}