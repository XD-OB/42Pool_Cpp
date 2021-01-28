/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 03:20:51 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:25:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CHARACTER_H
# define    CHARACTER_H

# include "ICharacter.hpp"

class   Character : public ICharacter
{
    private:
        std::string     _name;
        int             _invSize;
        AMateria *      _inventory[4];
        
        void            _copyInvFrom( Character const & src );
        void            _invFree( void );
        Character( void );

    public:
        Character( std::string const & name );
        Character( Character const & src );
        ~Character( void );
        
        // Operators
        Character &     operator=( Character const & rhs );
        
        // Accessors
        std::string const &     getName( void ) const;
        int                     getInvSize( void ) const;
        
        // Member fctes
        void            equip( AMateria * m );
        void            unequip( int idx );
        void            use( int idx, ICharacter & target );
};

#endif