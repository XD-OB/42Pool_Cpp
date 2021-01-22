/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:34:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 13:00:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SUPERTRAP_H
# define    SUPERTRAP_H

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"


class   SuperTrap :
    virtual public  FragTrap,
    virtual public  NinjaTrap
{
    public:
        SuperTrap( void );
        SuperTrap( std::string name );
        SuperTrap( SuperTrap const & src );
        ~SuperTrap( void );

        // operations:
        SuperTrap &      operator=( SuperTrap const & rhs );
};

#endif