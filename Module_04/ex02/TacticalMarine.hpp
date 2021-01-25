/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:03:54 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 16:15:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     TACTICALMARINE_H
# define    TACTICALMARINE_H

# include "ISpaceMarine.hpp"

class   TacticalMarine : public ISpaceMarine
{
    private:
        /* data */

    public:
        TacticalMarine( void );
        TacticalMarine( TacticalMarine const & src );
        ~TacticalMarine( void );
        // Operators
        TacticalMarine &    operator=( TacticalMarine const & rhs );
        // Member fctes
        ISpaceMarine*       clone( void ) const;
        void                battleCry( void ) const;
        void                rangedAttack( void ) const;
        void                meleeAttack( void ) const;
};

#endif