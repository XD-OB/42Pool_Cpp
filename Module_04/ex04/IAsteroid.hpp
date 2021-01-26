/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:20:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:44:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     IASTEROID_H
# define    IASTEROID_H

# include <string>

class   DeepCoreMiner;
class   StripMiner;

class   IAsteroid
{
    public:
        virtual ~IAsteroid( void ) {}
        virtual std::string     getName( void ) const = 0;
        virtual std::string     beMined( DeepCoreMiner * ) const = 0;
        virtual std::string     beMined( StripMiner * ) const = 0;
};

#endif