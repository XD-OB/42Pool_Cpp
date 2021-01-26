/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 05:07:55 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 05:13:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     IMATERIASOURCE_H
# define    IMATERIASOURCE_H

#include "AMateria.hpp"
#include <string>

class   IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void        learnMateria( AMateria* m ) = 0;
        virtual AMateria *  createMateria( std::string const & type ) = 0;
};

#endif