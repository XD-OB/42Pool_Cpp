/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:09:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 17:51:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMANA_H
# define    HUMANA_H

# include "Weapon.hpp"

class   HumanA {

    private:
        std::string _name;
        Weapon&     _weapon;

    public:
        HumanA( std::string name, Weapon& weapon );
        ~HumanA( void );

        void        attack( void );
};

#endif