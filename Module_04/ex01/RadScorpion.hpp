/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:56:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 22:16:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     RADSCORPION_H
# define    RADSCORPION_H

# include "Enemy.hpp"


class   RadScorpion : public Enemy
{
    public:
        RadScorpion( void );
        RadScorpion( RadScorpion const & src );
        virtual ~RadScorpion( void );

        // operators
        RadScorpion &   operator=( RadScorpion const & rhs );
};

#endif