/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noble.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:15:58 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:59:12 by obelouch         ###   ########.fr       */
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
        Noble( std::string name );
        Noble( Noble const & src );
        virtual ~Noble( void );
        // Operators:
        Noble &      operator=( Noble const & rhs );
        // Member fcts:
        void        getPolymorphed( void ) const;
};

#endif