/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:52:10 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 01:53:25 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PONY_H
# define    PONY_H

#include <string>

class Pony
{
    private:
        unsigned int    _age;
        std::string     _name;
        std::string     _color;

    public:
        Pony(
            std::string name,
            std::string color,
            unsigned int age
        );
        ~Pony();

        unsigned int    getAge( void ) const ;
        std::string     getName( void ) const ;
        std::string     getColor( void ) const ;
        bool            setAge( unsigned int age );
        bool            setName( std::string name );
        bool            setColor( std::string color );
};


#endif