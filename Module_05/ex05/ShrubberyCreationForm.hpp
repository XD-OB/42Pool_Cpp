/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 03:17:19 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:05:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SHRUBBERY_CREATION_FORM_H
# define    SHRUBBERY_CREATION_FORM_H

# include "Form.hpp"
# include <string>


class   ShrubberyCreationForm : public Form
{
    private:
        std::string     _target;
        
        ShrubberyCreationForm( void );

    public:
        ShrubberyCreationForm( std::string const & target );
        ShrubberyCreationForm( ShrubberyCreationForm const & src );
        ~ShrubberyCreationForm( void );

        // Operators
        ShrubberyCreationForm &     operator=( ShrubberyCreationForm const & rhs );

        // Getters
        std::string const &         getTarget( void ) const;

        // Member function
        virtual void        beExecuted( void ) const;
};

#endif