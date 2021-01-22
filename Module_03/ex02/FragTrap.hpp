/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 11:20:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FRAGTRAP_H
# define    FRAGTRAP_H

# include "ClapTrap.hpp"
# include <string>


struct  t_specialAttack;

class   FragTrap : public ClapTrap
{
    private:
        static unsigned int const   _nbrSpecialAttacks;
        static t_specialAttack      _attacks[];

    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );
        ~FragTrap( void );

        // operations:
        FragTrap &      operator=( FragTrap const & rhs );
        // Ultimate (random special attack):
        unsigned int    vaulthunter_dot_exe( std::string const & target );
        // Special Attacks:
        unsigned int    funzerker( std::string const & target );
        unsigned int    blightBot( std::string const & target );
        unsigned int    gunWizard( std::string const & target );
        unsigned int    minionTrap( std::string const & target );
        unsigned int    meatUnicycle( std::string const & target );
        unsigned int    laserInferno( std::string const & target );
        unsigned int    torgueFiesta( std::string const & target );
        unsigned int    oneShotWonder( std::string const & target );
};


#endif