/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:47:19 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/30 17:12:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScalar.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void    exitUsage( int error )
{
    std::cout << "Error: ";

    if      ( error == WRONG_AC  ) std::cout << "Wrong number of arguments!" << std::endl;
    else if ( error == WRONG_ARG ) std::cout << "Wrong type of argument!"    << std::endl;

    std::cout << "Usage: ./convert <_value_>" << std::endl;
    exit(1);
}

int     main( int ac, char ** av )
{
    std::string     value;

    if ( ac != 2 ) exitUsage( WRONG_AC );

    value = av[1];

    ConvScalar  convScalar( value );
}