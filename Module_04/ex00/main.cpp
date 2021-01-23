/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:42:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 18:16:51 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Noble.hpp"
#include "Peon.hpp"
#include <iostream>

int main()
{

    std::cout << "---- Oussama The Wizard ----" << std::endl;

    // Sorcerer
    Sorcerer    oussama("Oussama", "the Khanvoum");
    Sorcerer    anas("Anas", "the Fearless");
    // Victims
    Victim      youssef("youssef");
    Noble       souad("Souad");
    Peon        ilyas("Ilyas");

    souad.setName("Souad");

    // Introduce the Wizards:
    std::cout << oussama;
    std::cout << "My name is: " << anas.getName() \
              << ", known as: " << anas.getTitle() \
              << std::endl;

    std::cout << "anas: Look some victims ;)" << std::endl; 
    // Introduce the Victims:
    std::cout << youssef \
              << souad \
              << ilyas;

    // Oussama Polymorph ppl
    std::cout << "oussama: Let me turn them!" << std::endl;
    oussama.polymorph(youssef);
    oussama.polymorph(souad);
    oussama.polymorph(ilyas);

    // State of ppl
    youssef.getPolymorphed();
    souad.getPolymorphed();
    ilyas.getPolymorphed();

    return 0;
}