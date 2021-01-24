/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:30:53 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:19:08 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ENEMY_H
# define    ENEMY_H

#include <string>


class   Enemy
{
    private:
        Enemy( void );
    
    protected:
        int             _hp;
        std::string     _type;

    public:
        Enemy(
            int hp,
            std::string const & type
        );
        Enemy( Enemy const & src );
        virtual ~Enemy( void );
        // Operation:
        Enemy &                 operator=( Enemy const & rhs );
        // Accessors:
        std::string const &     getType( void ) const;
        int                     getHP( void ) const;
        // Member fctes:
        virtual void            takeDamage( int damage );
};

#endif