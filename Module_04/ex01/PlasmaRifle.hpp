/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:44:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 22:46:49 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PLASMARIFLE_H
# define    PLASMARIFLE_H

#include "AWeapon.hpp"


class   PlasmaRifle : public AWeapon
{
    private:
        PlasmaRifle(
            std::string name,
            int apcost,
            int damage
        );

    public:
        PlasmaRifle( void );
        PlasmaRifle( PlasmaRifle const & src );
        ~PlasmaRifle( void );
        // Operation:
        PlasmaRifle &   operator=( PlasmaRifle const & rhs );
        // Member fctes:
        void            attack( void ) const;
};

#endif