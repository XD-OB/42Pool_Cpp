/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:03:54 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:23:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ASSAULTTERMINATOR_H
# define    ASSAULTTERMINATOR_H

# include "ISpaceMarine.hpp"

class   AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator( void );
        AssaultTerminator( AssaultTerminator const & src );
        ~AssaultTerminator( void );
        // Operators
        AssaultTerminator &    operator=( AssaultTerminator const & rhs );
        // Member fctes
        ISpaceMarine*       clone( void ) const;
        void                battleCry( void ) const;
        void                rangedAttack( void ) const;
        void                meleeAttack( void ) const;
};

#endif