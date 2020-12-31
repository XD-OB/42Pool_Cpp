/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:54:13 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 01:58:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void        memoryLeak( void ) {

    std::string     *panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;
    
    delete panthere;
}