/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:09:11 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 17:52:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMANB_H
# define    HUMANB_H

# include "Weapon.hpp"

class   HumanB {

    private:
        std::string _name;
        Weapon*     _weapon;

    public:
        HumanB( std::string name );
        ~HumanB( void );

        void        attack( void );
        void        setWeapon( Weapon& weapon );
};

#endif