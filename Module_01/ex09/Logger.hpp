/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 02:35:03 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 04:07:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     LOGGER_H
# define    LOGGER_H

# include <iostream>
# include <string>

struct  t_log;

class   Logger {

    private:
        static t_log    _logs[2];
        std::string     _filename;

        std::string     _makeLogEntry( std::string message ) const;
        void            _logToConsole( std::string message ) const;
        void            _logToFile( std::string message ) const;

    public:
        Logger( std::string filename );
        ~Logger( void );

        std::string     getFilename( void ) const;
        void            log( std::string const & dest, std::string const & message ) const;
};


#endif