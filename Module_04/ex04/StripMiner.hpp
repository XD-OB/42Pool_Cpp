/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:06:17 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:49:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     STRIPMINER_H
# define    STRIPMINER_H

#include "IMiningLaser.hpp"


class   StripMiner : public IMiningLaser
{
    public:
        StripMiner( void );
        StripMiner( StripMiner const & src );
        ~StripMiner( void );

        // Operators
        StripMiner &    operator=( StripMiner const & rhs );

        // Member fctes
        void            mine( IAsteroid * asteroid );
};

#endif