/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:34:37 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:53:14 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     KOALASTEROID_H
# define    KOALASTEROID_H

# include "IAsteroid.hpp"


class   KoalaSteroid : public IAsteroid
{
    public:
        KoalaSteroid( void );
        KoalaSteroid( KoalaSteroid const & src );
        ~KoalaSteroid( void );

        // Operators
        KoalaSteroid &          operator=( KoalaSteroid const & rhs );

        // Accessors
		std::string	const &		getName( void ) const;
        
        // Member fctes
        std::string				beMined( DeepCoreMiner * laser ) const;
		std::string				beMined( StripMiner * laser ) const;
};

#endif