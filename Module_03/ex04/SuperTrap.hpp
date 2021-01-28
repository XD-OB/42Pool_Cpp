/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:34:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:34:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SUPERTRAP_H
# define    SUPERTRAP_H

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"


class   SuperTrap :
    public          FragTrap,
    public          NinjaTrap
{
    public:
        SuperTrap( void );
        SuperTrap( std::string const & name );
        SuperTrap( SuperTrap const & src );
        ~SuperTrap( void );

        // operations:
        SuperTrap &      operator=( SuperTrap const & rhs );
};

#endif