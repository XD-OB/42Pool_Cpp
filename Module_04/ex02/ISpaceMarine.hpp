/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:17:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 03:20:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ISPACEMARINE_H
# define    ISPACEMARINE_H

class   ISpaceMarine
{
    public:
        virtual ~ISpaceMarine( void ) {}
        virtual ISpaceMarine*   clone( void ) const = 0;
        virtual void            battleCry( void ) const = 0;
        virtual void            rangedAttack( void ) const = 0;
        virtual void            meleeAttack( void ) const = 0;
};

#endif