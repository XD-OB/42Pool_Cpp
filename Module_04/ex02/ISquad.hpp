/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:13:42 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 03:20:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ISQUAD_H
# define    ISQUAD_H

#include "ISpaceMarine.hpp" 

class   ISquad
{
    public:
        virtual ~ISquad( void ) {}
        virtual int             getCount( void ) const = 0;
        virtual ISpaceMarine*   getUnit( int ) const = 0;
        virtual int             push( ISpaceMarine* ) = 0;
};

#endif