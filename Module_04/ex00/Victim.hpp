/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:40:39 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 16:58:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     VICTIM_H
# define    VICTIM_H

# include <string>


class   Victim
{
    protected:
        std::string     _name;
        // L'astuce XD
        Victim( void );

    public:
        Victim( std::string name );
        Victim( Victim const & src );
        ~Victim( void );
        // Operators:
        Victim &        operator=( Victim const & rhs );
        // Getters:
        std::string     getName( void ) const;
        // Setters:
        void            setName( std::string name );
        // Members fcts:
        virtual void    getPolymorphed( void ) const;
};

std::ostream &  operator<<( std::ostream & os, Victim const & rhs );

#endif