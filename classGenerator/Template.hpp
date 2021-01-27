/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 23:49:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     TEMPLATE_H
# define    TEMPLATE_H

# include <string>


class   Template
{
    private:
        // Data

    public:
        Template( void );
        Template( Template const & src );
        virtual ~Template( void );

        // Operators
        Template &      operator=( Template const & rhs );

        // Getters

        // Member functions

        // Exceptions

};

std::ostream &      operator<<( std::ostream & os, Template const & rhs );

#endif