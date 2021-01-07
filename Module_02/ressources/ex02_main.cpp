/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 03:06:56 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/07 04:02:14 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int		main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;

	// MAX:
	std::cout << "MAX function:" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	// MIN:
	std::cout << "MIN function:" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	//a = b;
	if ( a == b )
		std::cout << "tafa7a" << std::endl;

	return 0;
}