/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:21:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>


int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy ep 2: Forms more Forms -----------" \
              << std::endl << std::endl;

    Bureaucrat      oussama("Oussama", 10);
    Bureaucrat      anas("Anas", 45);

    Form            annualPrime("Annual Prime", 30, 10);

    std::cout << annualPrime << std::endl;

    try {
        oussama.signForm( annualPrime );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        anas.signForm( annualPrime );
    }
    catch( std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    return 0;
}