/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:11:15 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 03:17:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ZOMBIEEVENT_H
# define    ZOMBIEEVENT_H

#include "Zombie.hpp"


class ZombieEvent
{
    private:
        static std::string  _rdNames[12];
        std::string         _type;

    public:
        ZombieEvent();
        ~ZombieEvent();
    
        void        randomChump( void ) const ;     
        void        setZombieType( std::string type );
        Zombie*     newZombie( std::string name ) const ;
};

#endif