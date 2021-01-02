/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 02:35:00 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 04:04:49 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iomanip>
#include <sstream>
#include <fstream>
#include <ctime>


struct          t_log {

    std::string const   type;
    void                (Logger::*f) ( std::string message ) const;
};

t_log           Logger::_logs[2] = {
    {
        "console",
        &Logger::_logToConsole,
    },
    {
        "file",
        &Logger::_logToFile,
    },
};


Logger::Logger( std::string filename ) : _filename(filename) {}

Logger::~Logger( void ) {}

std::string     Logger::getFilename( void ) const {
    return this->_filename;
}

void            Logger::_logToConsole( std::string message ) const {
    std::cout << message << std::endl;
}

void            Logger::_logToFile( std::string message ) const {
    std::ofstream   file( this->_filename, std::ios::app );

    if ( file.is_open() )
        file << message << std::endl;
}

std::string     Logger::_makeLogEntry( std::string message ) const {

    std::ostringstream  log_msg;
    // Get the current data-time based on current system
    time_t              t = time(0);
    // Convert t to tm struct
    struct tm           *now = localtime(&t);
  
    log_msg << '[' << now->tm_year + 1900 \
 		    << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) \
 			<< std::setw(2) << std::setfill('0') << now->tm_mday << '_' \
 			<< std::setw(2) << std::setfill('0') << now->tm_hour
 			<< std::setw(2) << std::setfill('0') << now->tm_min
 			<< std::setw(2) << std::setfill('0') << now->tm_sec \
            << "] " << message;
    
    return log_msg.str();
}

void            Logger::log( std::string const & dest, std::string const & message ) const {

    int     i;

    for ( i = 0; i < 2; i++ )
        if ( dest == this->_logs[i].type )  {
            (this->*(_logs[i].f)) ( this->_makeLogEntry(message) );
            break ;
        }
    if ( i == 2)
        std::cout << "Error: Unknown dest! [file | console]" << std::endl;
}
