/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:31:11 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 20:26:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     MININGBARGE_H
# define    MININGBARGE_H

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"


class   MiningBarge
{
    private:
        int             _lasersCount;
        IMiningLaser *  _lasers[4];

        // Member fctes
        void            _copyInvFrom( MiningBarge const & src );
        void            _invNullAll( void );

    public:
        MiningBarge( void );
        MiningBarge( MiningBarge const & src );
        ~MiningBarge( void );

        //  Operators
        MiningBarge &   operator=( MiningBarge const & rhs );

        // Accessors
        int             getLasersCount( void ) const;

        // Member fctes
        void    equip( IMiningLaser * laser );
        void    mine( IAsteroid * asteroid ) const;
};

#endif