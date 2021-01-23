/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:24:02 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 19:21:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     AWEAPON_H
# define    AWEAPON_H

# include <string>


class   AWeapon
{
    private:
        AWeapon( void );

    protected:
        std::string         _name;
        int                 _apcost;
        int                 _damage;

    public:
        AWeapon(
            std::string const & name,
            int apcost,
            int damage
        );
        AWeapon( AWeapon const & src );
        ~AWeapon( void );
        // Operations:
        AWeapon &               operator=( AWeapon const & rhs );
        // Getters:
        std::string const &     getName( void ) const;
        int                     getAPCost( void ) const;
        int                     getDamage( void ) const;
        // Member fonctions:
        virtual void            attack( void ) const = 0;
};

#endif