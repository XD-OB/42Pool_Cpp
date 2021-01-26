/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 04:35:57 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 05:06:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ICE_H
# define    ICE_H

#include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice( void );
        Ice( Ice const & src );
        ~Ice( void );
        // Operators
        Ice &       operator=( Ice const & rhs );
        // Member fctes
        AMateria *  clone( void ) const;
        void        use( ICharacter & target );
};

#endif