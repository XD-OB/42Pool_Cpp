/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 06:40:35 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 06:59:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
    return ;
}

Human::~Human( void ) {
    return ;
}

Brain const     &Human::getBrain( void ) const {
    return this->_brain;
}

std::string     Human::identify( void ) const {
    return this->_brain.identify();
}