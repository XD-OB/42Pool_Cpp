/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:00:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     INTERN_H
# define    INTERN_H

# include "Form.hpp"
# include <stdexcept>
# include <string>

typedef struct  s_work
{
    std::string const &     formName;
    Form *                  (*func)( std::string const & );
}               t_work;

class   Intern
{
    private:
        static t_work      _works[3];

    public:
        Intern( void );
        Intern( Intern const & src );
        ~Intern( void );

        // Operators
        Intern &    operator=( Intern const & rhs );

        // Member functions
        Form *      makeForm(
            std::string const & formType,
            std::string const & target
        ) const;
};

#endif