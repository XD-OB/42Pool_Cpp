/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 04:39:24 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:43:10 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class   ZombieHorde{

    private:
        Zombie*             _horde;
        int                 _n;
    
    public:
        ZombieHorde( int n );
        ~ZombieHorde();

        void    advert( void ) const;
};
