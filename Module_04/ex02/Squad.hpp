/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:20:47 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 17:16:50 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SQUAD_H
# define    SQUAD_H

# include "ISquad.hpp"
# include <cstdlib>

struct t_container;

class   Squad : public ISquad
{
    private:
        int             _count;
        t_container *   _squad;

        void            _copySquadFrom( Squad const & src );
        void            _destroy( void );
        bool            _isUnitInSquad( ISpaceMarine * marine ) const;  

    public:
        Squad( void );
        Squad( Squad const & src );
        ~Squad( void );
        // Operators
        Squad &         operator=( Squad const & rhs );
        // Accessors
        int             getCount( void ) const;
        ISpaceMarine *  getUnit( int ) const;
        // Member fctes
        int             push( ISpaceMarine* );
};

#endif