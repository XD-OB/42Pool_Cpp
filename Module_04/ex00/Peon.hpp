/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:15:58 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:58:31 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PEON_H
# define    PEON_H

# include "Victim.hpp"


class   Peon : public Victim
{
    private:
        Peon( void );

    public:
        Peon( std::string name );
        Peon( Peon const & src );
        virtual ~Peon( void );
        // Operators:
        Peon &      operator=( Peon const & rhs );
        // Member fcts:
        void        getPolymorphed( void ) const;
};

#endif