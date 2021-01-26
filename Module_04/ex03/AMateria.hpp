/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 02:51:24 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:09:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     AMATERIA_H
# define    AMATERIA_H

# include "ICharacter.hpp"
# include <string>

class   ICharacter;

class   AMateria
{
    private:
        AMateria( void );

    protected:
        std::string     _type;
        unsigned int    _xp;

    public:
        AMateria( std::string const & type );
        AMateria( AMateria const & src );
        virtual ~AMateria( void );

        // Operators
        AMateria &              operator=( AMateria const & rhs );

        // Accessors
        std::string const &     getType( void ) const;
        unsigned int            getXP( void ) const;

        virtual AMateria *      clone( void ) const = 0;
        virtual void            use( ICharacter & target ) = 0;
};



#endif