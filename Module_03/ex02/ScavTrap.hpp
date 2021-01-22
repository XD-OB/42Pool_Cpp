/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 11:21:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SCAVTRAP_H
# define    SCAVTRAP_H

# include "ClapTrap.hpp"
# include <string>


class   ScavTrap : public ClapTrap
{
    private:
        static unsigned int const   _nbrChallenges;
        static std::string const    _challenges[];

    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );
        ~ScavTrap( void );

        // operations:
        ScavTrap &      operator=( ScavTrap const & rhs );
        // Ultimate (random special attack):
        void            challengeNewcomer( std::string const & target );
};


#endif