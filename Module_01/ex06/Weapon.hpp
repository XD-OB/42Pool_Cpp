/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 07:03:55 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 16:07:24 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     WEAPON_H
# define    WEAPON_H

# include <string>

class Weapon
{
    private:
        std::string     _type;
    
    public:
        Weapon( std::string type );
        ~Weapon( void );

        std::string     &getType( void );
        void            setType( std::string type );    
};


#endif