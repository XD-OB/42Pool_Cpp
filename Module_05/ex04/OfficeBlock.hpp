/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 23:49:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     OFFICEBLOCK_H
# define    OFFICEBLOCK_H

# include <string>


class   OfficeBlock
{
    private:
        // Data

    public:
        OfficeBlock( void );
        OfficeBlock( OfficeBlock const & src );
        virtual ~OfficeBlock( void );

        // Operators
        OfficeBlock &      operator=( OfficeBlock const & rhs );

        // Getters

        // Member functions

        // Exceptions

};

std::ostream &      operator<<( std::ostream & os, OfficeBlock const & rhs );

#endif