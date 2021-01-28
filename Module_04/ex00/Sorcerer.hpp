/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:55:35 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:19:46 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SORCERER_H
# define    SORCERER_H

#include "Victim.hpp"
#include "Peon.hpp"
# include <string>


class   Sorcerer
{
    private:
        std::string     _name;
        std::string     _title;
        // L'astuce XD
        Sorcerer( void );

    public:
        Sorcerer(
            std::string const & name,
            std::string const & title
        );
        Sorcerer( Sorcerer const & src );
        ~Sorcerer( void );
        // Operators:
        Sorcerer &      operator=( Sorcerer const & rhs );
        // Getters:
        std::string     getName( void ) const;
        std::string     getTitle( void ) const;
        // Setters:
        void            setName( std::string const & name );
        void            setTitle( std::string const & title );
        // Members fcts:
        void            polymorph( Victim const & victim ) const;
};

std::ostream &  operator<<( std::ostream & os, Sorcerer const & rhs );

#endif