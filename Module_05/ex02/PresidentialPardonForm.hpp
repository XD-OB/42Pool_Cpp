/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 03:21:51 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:06:08 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PRESIDENTIAL_PARDON_FORM_H
# define    PRESIDENTIAL_PARDON_FORM_H

# include "Form.hpp"
# include <string>


class   PresidentialPardonForm : public Form
{
    private:
        std::string     _target;
        
        PresidentialPardonForm( void );

    public:
        PresidentialPardonForm( std::string const & target );
        PresidentialPardonForm( PresidentialPardonForm const & src );
        ~PresidentialPardonForm( void );

        // Operators
        PresidentialPardonForm &     operator=( PresidentialPardonForm const & rhs );

        // Getters
        std::string const &         getTarget( void ) const;

        // Member function
        virtual void        beExecuted( void ) const;
};

#endif