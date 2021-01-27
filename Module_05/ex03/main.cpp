/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 00:02:44 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>


int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy ep 4 -----------" \
              << std::endl << std::endl;

    Bureaucrat      oussama("Oussama", 2);
    Intern          ali;
    Form *          form;

// PRESIDENTIAL PARDON

    std::cout << "== Presidential Pardon Form: ================"<< std::endl;
    form = ali.makeForm("presidential pardon", "anas");
    std::cout << *form << std::endl;
    // Sign & Execute the form
    try {
        oussama.signForm( *form );
        std::cout << *form << std::endl;
        oussama.executeForm( *form );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
// ROBOTO MY REQUEST    

    std::cout << "== Robotomy Request Form: ================"<< std::endl;
    form = ali.makeForm("robotomy request", "anas");
    std::cout << *form << std::endl;
    // Sign & Execute the form
    try {
        oussama.signForm( *form );
        std::cout << *form << std::endl;
        oussama.executeForm( *form );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

// SHRUBBERY CREATION

    std::cout << "== Shrubbery Creation Form: ================"<< std::endl;
    form = ali.makeForm("shrubbery creation", "anas");
    std::cout << *form << std::endl;
    // Sign & Execute the form
    try {
        oussama.signForm( *form );
        std::cout << *form << std::endl;
        oussama.executeForm( *form );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

// Unknown Form

    std::cout << "== Unknown Form: ================"<< std::endl;
    form = ali.makeForm("internship", "anas");
    std::cout << std::endl;

    delete form;

    return 0;
}