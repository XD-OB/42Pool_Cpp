/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 03:00:36 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:14:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ICHARACTER_H
# define    ICHARACTER_H

# include "AMateria.hpp"
# include <string>

class   AMateria;

class   ICharacter
{
    public:
        virtual ~ICharacter( void ) {}
        virtual std::string const &     getName( void ) const = 0;
        virtual void                    equip( AMateria * m ) = 0;
        virtual void                    unequip( int idx ) = 0;
        virtual void                    use( int idx, ICharacter & target ) = 0;
};

#endif