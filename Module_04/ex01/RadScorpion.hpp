/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:56:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 23:58:16 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     RADSCORPION_H
# define    RADSCORPION_H

# include "Enemy.hpp"


class   RadScorpion : public Enemy
{
    private:
        RadScorpion(
            int hp,
            std::string type
        );

    public:
        RadScorpion( void );
        RadScorpion( RadScorpion const & src );
        ~RadScorpion( void );
        // operators
        RadScorpion &   operator=( RadScorpion const & rhs );
        // Member fctes
        void            takeDamage( int damage );
};

#endif