/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 03:20:09 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:05:44 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ROBOTOMY_REQUEST_FORM
# define    ROBOTOMY_REQUEST_FORM

# include "Form.hpp"
# include <string>


class   RobotomyRequestForm : public Form
{
    private:
        std::string     _target;
        
        RobotomyRequestForm( void );

    public:
        RobotomyRequestForm( std::string const & target );
        RobotomyRequestForm( RobotomyRequestForm const & src );
        ~RobotomyRequestForm( void );

        // Operators
        RobotomyRequestForm &   operator=( RobotomyRequestForm const & rhs );

        // Getters
        std::string const &     getTarget( void ) const;

        // Member function
        virtual void        beExecuted( void ) const;
};

#endif