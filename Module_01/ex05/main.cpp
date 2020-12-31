/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 06:28:11 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 06:48:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>


int     main( void ) {
    
    Human   bob;
    
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;

    return 0;
}
