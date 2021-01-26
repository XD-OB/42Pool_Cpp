/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 05:12:43 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 05:53:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     MATERIASOURCE_H
# define    MATERIASOURCE_H

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    private:
        AMateria *  _inventory[4];
        int         _invSize;

        void        _copyInvFrom( MateriaSource const & src );
        void        _invFree( void );

    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const & src );
        ~MateriaSource( void );
        
        // Operators
        MateriaSource &     operator=( MateriaSource const & rhs );
        
        // Accessors
        int         getInvSize( void ) const;

        // Member fctes
        void        learnMateria( AMateria * m );
        AMateria *  createMateria( std::string const & type );
};

#endif