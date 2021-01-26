/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:06:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:48:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     DEEPCOREMINER_H
# define    DEEPCOREMINER_H

#include "IMiningLaser.hpp"


class   DeepCoreMiner : public IMiningLaser
{
    private:
        /* data */

    public:
        DeepCoreMiner( void );
        DeepCoreMiner( DeepCoreMiner const & src );
        ~DeepCoreMiner( void );

        // Operators
        DeepCoreMiner & operator=( DeepCoreMiner const & rhs );

        // Member fctes
        void            mine( IAsteroid * asteroid );
};

#endif