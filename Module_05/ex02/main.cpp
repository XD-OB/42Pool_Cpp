/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:23:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy ep 3: new role 'Executor'! -----------" \
              << std::endl << std::endl;

    Bureaucrat      oussama("Oussama", 2);
    Bureaucrat      yassir("yassir", 20);
    Bureaucrat      anas("Anas", 51);
    Bureaucrat      ali("Ali", 144);

    PresidentialPardonForm      pardon("ilyas");
    RobotomyRequestForm         roboto("ilyas");
    ShrubberyCreationForm       shrubbery("ilyas");

    std::cout << pardon << std::endl;
    std::cout << roboto << std::endl;
    std::cout << shrubbery << std::endl;

// PRESIDENTIAL PARDON

    std::cout << std::endl \
              << " ====== Presidential Pardon ====== " \
              << std::endl;
    // Execute whitout sign the form
    try {
        oussama.executeForm( pardon );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    
    // Sign the form
    try {
        yassir.signForm( pardon );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with low grade
    try {
        yassir.executeForm( pardon );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with high grade
    try {
        oussama.executeForm( pardon );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    
// ROBOTO MY REQUEST    

    std::cout << std::endl \
              << " ====== Roboto My Request ====== " \
              << std::endl;

    // Execute whitout sign the form
    try {
        yassir.executeForm( roboto );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    
    // Sign the form
    try {
        anas.signForm( roboto );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with low grade
    try {
        anas.executeForm( roboto );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with high grade
    try {
        yassir.executeForm( roboto );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

// SHRUBBERY CREATION

    std::cout << std::endl \
              << " ====== Schrubbery Creation ====== " \
              << std::endl;

    // Execute whitout sign the form
    try {
        anas.executeForm( shrubbery );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    
    // Sign the form
    try {
        ali.signForm( shrubbery );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with low grade
    try {
        ali.executeForm( shrubbery );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    // Execute with high grade
    try {
        anas.executeForm( shrubbery );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    return 0;
}