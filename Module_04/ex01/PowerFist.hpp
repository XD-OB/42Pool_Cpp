/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:44:26 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 18:51:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     POWERFIST_H
# define    POWERFIST_H

#include "AWeapon.hpp"

class   PowerFist : public AWeapon
{
    private:
        PowerFist( void );

    public:
        PowerFist(
            std::string name,
            int apcost,
            int damage
        );
        ~PowerFist();
};

#endif