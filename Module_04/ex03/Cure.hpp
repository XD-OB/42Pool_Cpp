/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 04:35:57 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 05:06:38 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CURE_H
# define    CURE_H

#include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
        Cure( void );
        Cure( Cure const & src );
        ~Cure( void );
        // Operators
        Cure &       operator=( Cure const & rhs );
        // Member fctes
        AMateria *  clone( void ) const;
        void        use( ICharacter & target );
};

#endif