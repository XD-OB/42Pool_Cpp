/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 02:35:06 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 04:05:19 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int     main( void ) {
    
    std::string     message = "Hi Corrector cv? tous va bien?";
    Logger          myLog = Logger( "69.log" );

    std::cout << "Message = [" << message << "]" << std::endl << std::endl\
              << "Write a log in the console:" << std::endl;
    // Log in console:
    myLog.log( "console", message );

    std::cout << std::endl << "Write a log in the file [" \
              << myLog.getFilename() << "]" << std::endl;
    // Log in file:
    myLog.log( "file", message );

    return 0;
}