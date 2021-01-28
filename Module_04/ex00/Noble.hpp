/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noble.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:15:58 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:22:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     Noble_H
# define    Noble_H

# include "Victim.hpp"


class   Noble : public Victim
{
    private:
        Noble( void );

    public:
        Noble( std::string const & name );
        Noble( Noble const & src );
        virtual ~Noble( void );
        // Operators:
        Noble &      operator=( Noble const & rhs );
        // Member fcts:
        void        getPolymorphed( void ) const;
};

#endif