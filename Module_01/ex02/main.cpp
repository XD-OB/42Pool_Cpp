/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 03:23:20 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:18:03 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>


int     main( void ) {
    
    std::cout << "############## THE WALKING DEAD: ep1 #################" << std::endl << std::endl ;

    ZombieEvent     event = ZombieEvent();
    event.setZombieType("Walker");

    // Zombie Horde in the Stack:
    std::cout << "OUSSAMA: SURVIVALS! Zombies coming from the Stack!" << std::endl << std::endl;
    Zombie      zFatiha = Zombie("Fatiha", "Crawler");
    Zombie      zPedro = Zombie("Pedro", "Fat");
    Zombie      zAdam = Zombie("Adam", "Crawler");
    zFatiha.advert();
    zPedro.advert();
    zAdam.advert();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    std::cout << std::endl;
    
    // Zombie Horde in the Heap:
    std::cout << "ANAS: WTF! Zombies coming from the Heap too!!" << std::endl << std::endl;
    Zombie      *zptrRayan = event.newZombie("Rayan");
    Zombie      *zptrHanan = event.newZombie("Hanan");
    zptrRayan->advert();
    zptrHanan->advert();
    event.setZombieType("Screamer");
    Zombie      *zptrLeila = event.newZombie("Leila");
    zptrLeila->advert();
    event.setZombieType("Runner");
    Zombie      *zptrAhmed = event.newZombie("Ahmed");
    Zombie      *zptrChaimae = event.newZombie("Chaimae");
    zptrAhmed->advert();
    zptrChaimae->advert();
    std::cout << std::endl << "OUSSAMA: Fuck! Screamer we can't let him call the OTHERS!!!!!" << std::endl << std::endl;
    delete zptrLeila;
    std::cout << std::endl << "ILYAS: RUNNERS!!! we should kill them first, SURVIVAL let's take this bastards from the HEAP first!" << std::endl << std::endl;
    delete zptrAhmed;
    delete zptrChaimae;
    delete zptrRayan;
    delete zptrHanan;

    std::cout << std::endl << "SOUAD: All zombies in the heap are dead ;)" << std::endl;
    std::cout << std::endl << "OUSSAMA: QuicK let's finish our work in the Stack!" << std::endl << std::endl;
    
    return 0;
}