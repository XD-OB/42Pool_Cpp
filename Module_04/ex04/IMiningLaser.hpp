/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:03:05 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:03:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_H
# define IMININGLASER_H

# include <string>
# include "IAsteroid.hpp"


class IMiningLaser
{
	public:
		virtual ~IMiningLaser( void ) {}
		virtual void    mine( IAsteroid * asteroid ) = 0;
};

#endif