/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:31:11 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 19:10:41 by obelouch         ###   ########.fr       */
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

    public:
        MiningBarge( void );
        MiningBarge( MiningBarge const & src );
        ~MiningBarge( void );

        //  Operators
        MiningBarge &   operator=( MiningBarge const & rhs );

        // Member fctes
        void    equip( IMiningLaser * laser );
        void    mine( IAsteroid * asteroid ) const;
};

#endif