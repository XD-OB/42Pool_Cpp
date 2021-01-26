/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:44:26 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 22:14:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     POWERFIST_H
# define    POWERFIST_H

#include "AWeapon.hpp"


class   PowerFist : public AWeapon
{
    public:
        PowerFist( void );
        PowerFist( PowerFist const & src );
        virtual ~PowerFist( void );
        // Operation:
        PowerFist &     operator=( PowerFist const & rhs );
        // Member fctes:
        void            attack( void ) const;
};

#endif