/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:36:11 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:59:21 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ASTEROKREOG_H
# define    ASTEROKREOG_H

# include "IAsteroid.hpp"


class   AsteroKreog : public IAsteroid
{
    public:
        AsteroKreog( void );
        AsteroKreog( AsteroKreog const & src );
        ~AsteroKreog( void );

        // Operators
        AsteroKreog &           operator=( AsteroKreog const & rhs );

        // Accessors
		std::string	const &		getName( void ) const;
        
        // Member fctes
        std::string				beMined( DeepCoreMiner * laser ) const;
		std::string				beMined( StripMiner * laser ) const;
};

#endif