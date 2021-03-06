/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:17:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 15:33:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void    ponyOnTheStack( void ) {
    
    Pony    jett = Pony("Jett", "Pink", 5);

    std::cout << "There is my little pony '" << jett.getName() << "'" << std::endl;
    std::cout << "With her beautiful " << jett.getColor() << " tail, ";
    std::cout << "today she's " << jett.getAge() << " years old, ";
    jett.setAge( 6 );
    std::cout << "but tomorrow she's will be " << jett.getAge() << " years old, ";
    std::cout << "YES! it's her Birthday." << std::endl;
}

void    ponyOnTheHeap( void ) {

    Pony    *phoenix = new Pony("Phoenix", "Black", 11);

    std::cout << "There is my old pony '" << phoenix->getName() << "'" << std::endl;
    std::cout << "A " << phoenix->getColor() << " strong pony, ";
    std::cout << "he's " << phoenix->getAge() << " years old,";
    phoenix->setName( "britch" );
    std::cout << " he don't like his name so i decide to name him '" << phoenix->getName() << "', ";
    std::cout << "I think he LIKE this name!!" << std::endl;

    delete phoenix;
}

int     main( void ) {

    std::cout << "~~~ On the Stack! ~~~" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl;

    std::cout << "~~~ On the Heap! ~~~" << std::endl;
    ponyOnTheHeap();
    return 0;
}