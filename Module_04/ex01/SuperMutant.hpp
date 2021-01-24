/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:24:46 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 23:56:54 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SUPERMUTANT_H
# define    SUPERMUTANT_H

# include "Enemy.hpp"


class   SuperMutant : public Enemy
{
    private:
        SuperMutant(
            int hp,
            std::string type
        );

    public:
        SuperMutant( void );
        SuperMutant( SuperMutant const & src );
        ~SuperMutant( void );
        // operators
        SuperMutant &   operator=( SuperMutant const & rhs );
        // Member fctes
        void            takeDamage( int damage );
};

#endif