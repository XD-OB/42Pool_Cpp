/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:44:26 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 22:24:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     POWERFIST_H
# define    POWERFIST_H

#include "AWeapon.hpp"


class   PowerFist : public AWeapon
{
    private:
        PowerFist(
            std::string name,
            int apcost,
            int damage
        );

    public:
        PowerFist( void );
        PowerFist( PowerFist const & src );
        ~PowerFist( void );
        // Operation:
        PowerFist &     operator=( PowerFist const & rhs );
        // Member fctes:
        void            attack( void ) const;
};

#endif