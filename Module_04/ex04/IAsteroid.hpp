/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:20:30 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:53:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     IASTEROID_H
# define    IASTEROID_H

# include <string>

# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

class   IAsteroid
{
    public:
        virtual ~IAsteroid( void ) {}
        virtual std::string             beMined( DeepCoreMiner * ) const = 0;
        virtual std::string             beMined( StripMiner * ) const = 0;
        virtual std::string const &     getName( void ) const = 0;
};

#endif