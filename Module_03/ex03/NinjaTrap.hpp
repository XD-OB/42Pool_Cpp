/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:18:34 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:32:56 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     NINJATRAP_H
# define    NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

struct  t_specialAttack;

class   NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap( void );
        NinjaTrap( std::string const & name );
        NinjaTrap( NinjaTrap const & src );
        ~NinjaTrap( void );

        // operations:
        NinjaTrap &      operator=( NinjaTrap const & rhs );
        // Special Attack Ninja Shoe Box:
        unsigned int    ninjaShoebox( NinjaTrap & ninjaTrap );
        unsigned int    ninjaShoebox( ClapTrap & clapTrap );
        unsigned int    ninjaShoebox( FragTrap & fragTrap );
        unsigned int    ninjaShoebox( ScavTrap & scavTrap );
};


#endif