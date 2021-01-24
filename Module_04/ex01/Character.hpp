/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:26:05 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:01:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CHARACTER_H
# define    CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"
# include <cstdlib>
# include <string> 

class Character
{
    private:
        std::string     _name;
        int             _ap;
        AWeapon *       _weapon;
        Character( void );
    
    public:
        Character( std::string const & name );
        Character( Character const & src );
        ~Character( void );
        // Operators
        Character &             operator=( Character const & rhs );
        // Getters
        std::string const &     getName( void ) const;
        int                     getAP( void ) const;
        AWeapon *               getWeapon( void ) const;
        // Members fctes
        void                    recoverAP( void );
        void                    equip( AWeapon * weapon );
        void                    attack( Enemy * enemy );
};

std::ostream &  operator<<( std::ostream & os, Character const & rhs );

#endif