/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cato9tails.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:28:45 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 14:32:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cato9tails.hpp"

void    print_error( std::string filename, std::string msg ) {

    std::cout << "cato9tails: " << filename << ": " << msg << std::endl;
}

void    cat_file( std::string filename ) {
    
    std::ifstream   ifile( filename );
    std::string     line;
    struct stat     stat;

    // Check the existance of the file:
    if ( access(filename.c_str(), F_OK) != 0 ) {
        print_error( filename, "No such file" );
        return ;
    }

    // Check if the file is a directory:
    lstat( filename.c_str(), &stat );
    if ( S_ISDIR(stat.st_mode) ) {
        print_error( filename, "Is a directory" );
        return ;
    }

    // Check if the file is readable:
    if ( access(filename.c_str(), R_OK) != 0 ) {
        print_error( filename, "Permission denied" );
        return ;
    }

    if ( !ifile.is_open() ) {
        print_error( filename, "Can't open the file" );
        return ;
    }

    while ( std::getline( ifile, line ) )
        std::cout << line << std::endl;
    
    ifile.close();
}

void    cat_stdin( void ) {

    std::string     line;

    while ( !std::cin.eof() ) {
        getline( std::cin, line );
        std::cout << line << std::endl;
    }
}