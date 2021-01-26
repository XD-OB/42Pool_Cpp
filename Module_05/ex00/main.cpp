/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 00:51:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy -----------" \
              << std::endl << std::endl;

    // Oussama 1
    Bureaucrat  oussama("Oussama", 1);
    std::cout << oussama << std::endl;
    try {
        oussama.incrementGrade();
    }
    catch( std::exception & e ) {
        std::cerr << "Increment Oussama grade: " << e.what() << std::endl;
    }
    
    // Ilyas 150
    Bureaucrat  ilyas("Ilyas", 150);
    std::cout << ilyas << std::endl;
    try {
        ilyas.decrementGrade();
    }
    catch( std::exception & e ) {
        std::cerr << "Decrement Ilyas grade: " << e.what() << std::endl;
    }

    // Ayman 200
    try {
        Bureaucrat  ayman("Ayman", 200);
    }
    catch( std::exception & e ) {
        std::cerr << "Ayman, 200: " << e.what() << std::endl;
    }

    // Souad 0
    try {
        Bureaucrat  souad("Souad", 0);
    }
    catch( std::exception & e ) {
        std::cerr << "Souad, 0: " << e.what() << std::endl;
    }

    // Anas 10
    try {
        Bureaucrat  anas = Bureaucrat("Anas", 10);
        std::cout << anas << std::endl;
        // Increment grade
        std::cout << "Increment " << anas.getName() \
                << " grade: " << anas.getGrade();
        anas.incrementGrade();
        std::cout << " ---> " << anas.getGrade() << std::endl;
        // Decrement grade
        std::cout << "Decrement " << anas.getName() \
                << " grade: " << anas.getGrade();
        anas.decrementGrade();
        std::cout << " ---> " << anas.getGrade() << std::endl;
    }
    catch( std::exception & e ) {
        std::cerr << "Anas: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}