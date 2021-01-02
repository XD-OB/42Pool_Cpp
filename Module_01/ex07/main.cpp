/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 18:10:32 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 00:10:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


void    exit_usage( int error ) {

    std::cout << "Error: ";
    if ( error == ERROR_ARGC ) std::cout << "Wrong number of arguments!" << std::endl;
    else if ( error == ERROR_STR1 ) std::cout << "The first string is empty!" << std::endl;
    else if ( error == ERROR_STR2 ) std::cout << "The second string is empty!" << std::endl;
    else if ( error == ERROR_IFILE ) std::cout << "Can't open the file!" << std::endl;
    else if ( error == ERROR_OFILE ) std::cout << "Can't write in the ouput file!" << std::endl;
    else std::cout << "Syntax!" << std::endl;
    // Print Usage:
    std::cout << "Usage: ./replace <_filename_> <_s1_> <_s2_>" << std::endl \
              << "       s1 = string to replace." << std::endl \
              << "       s2 = string to replace with." << std::endl;
    exit(1);
}


int     main( int argc, char** argv ) {
    
    // Check Arguments:
    if ( argc != 4 )
        exit_usage( ERROR_ARGC );

    std::string     filename = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];

    // Check if the strings are not empty:
    if ( s1.empty() ) exit_usage( ERROR_STR1 );
    if ( s2.empty() ) exit_usage( ERROR_STR2 );

    std::ifstream   ifile( filename );
    std::ofstream   ofile( filename + ".replace" );

    // Check the open of the files:
    if ( !ifile.is_open() ) exit_usage( ERROR_IFILE );
    if ( !ofile.is_open() ) exit_usage( ERROR_OFILE );
    
    // Iterate in the whole file:
    std::string     line;
    while ( std::getline(ifile, line) )
        ofile << replace(line, s1, s2) << std::endl;
    
    // Close files:
    ifile.close();
    ofile.close();

    return 0;
}