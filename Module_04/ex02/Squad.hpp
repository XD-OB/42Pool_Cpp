/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:20:47 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 04:21:10 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SQUAD_H
# define    SQUAD_H

# include "ISquad.hpp"
# include <cstdlib>

typedef struct t_squad;

class   Squad : public ISquad
{
    private:
        int             _count;
        t_squad *       _squad;

    public:
        Squad( void );
        Squad( Squad const & src );
        ~Squad( void );
        // Operators
        Squad &         operator=( Squad const & rhs );
        // Accessors
        int             getCount( void ) const;
        ISpaceMarine*   getUnit( int ) const;
        // Member fctes
        int             push( ISpaceMarine* );
};

#endif