/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:40:39 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:18:40 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     VICTIM_H
# define    VICTIM_H

# include <string>


class   Victim
{
    private:
        Victim( void );

    protected:
        std::string     _name;

    public:
        Victim( std::string const & name );
        Victim( Victim const & src );
        virtual ~Victim( void );
        // Operators:
        Victim &        operator=( Victim const & rhs );
        // Getters:
        std::string     getName( void ) const;
        // Setters:
        void            setName( std::string const & name );
        // Members fcts:
        virtual void    getPolymorphed( void ) const;
};

std::ostream &  operator<<( std::ostream & os, Victim const & rhs );

#endif