/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:52:10 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 15:41:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PONY_H
# define    PONY_H

#include <string>

class Pony
{
    private:
        std::string     _name;
        std::string     _color;
        unsigned int    _age;

    public:
        Pony(
            std::string name,
            std::string color,
            unsigned int age
        );
        ~Pony();
        // Getters:
        unsigned int    getAge( void ) const ;
        std::string     getName( void ) const ;
        std::string     getColor( void ) const ;
        // Setters:
        bool            setAge( unsigned int age );
        bool            setName( std::string name );
        bool            setColor( std::string color );
};


#endif