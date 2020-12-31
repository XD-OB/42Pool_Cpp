/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 05:16:58 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:45:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream> 


const int   n = 20;

int     main( void ) {

    std::cout << "############## THE WALKING DEAD: ep2 #################" << std::endl << std::endl \
              << "Ilyas: Tf! A HORDE is coming!!!!!" << std::endl << std::endl;
    ZombieHorde     horde = ZombieHorde(n);
    horde.advert();
    std::cout << std::endl \
              << "Anas: It's a lot of zombies, but we can defeat them, Souad prepare the weapons." << std::endl \
              << "Souad: DONE, but we gonna lose alot of ppl." << std::endl \
              << "Oussama: just be Quiet! i planted a voice amplifier, we gonna make them fall in the river ;)." << std::endl\
              << "*RUBY MUSIC is ON* LIH BIDARI KIDA OLAHO DARI KIDA WLANA DARI KIDA WLANA DAH" << std::endl \
              << "Anas: gg guys" << std::endl \
              << "Oussama: ez" << std::endl << std::endl;

    return 0;
}