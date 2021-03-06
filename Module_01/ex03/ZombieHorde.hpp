/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 04:39:24 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:56:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ZOMBIEHORDE_H
# define    ZOMBIEHORDE_H

# include "Zombie.hpp"

class   ZombieHorde{

    private:
        Zombie*             _horde;
        int                 _n;
    
    public:
        ZombieHorde( int n );
        ~ZombieHorde();

        void    advert( void ) const;
};

#endif