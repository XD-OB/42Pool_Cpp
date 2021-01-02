/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 00:59:31 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 02:20:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


int     main( void ) {
    
    // Survivals
    Human   oussama = Human( "Oussama" );
    Human   souad = Human( "Souad" );
    Human   ilyas = Human( "Ilyas" );
    Human   anas = Human( "Anas" );

    std::cout << "############## THE WALKING DEAD: ep3 #################" << std::endl << std::endl \
              << "Anas: Those bastards from Benguerir we made a deal with them to not accross the borders!" \
              << " look NOW they are taking our territory :(" << std::endl \
              << "Ilyas: I will smatch their heads..." << std::endl \
              << "Oussama: Let's tell those beachs who is the boss here, GRAB Your WEAPONS." << std::endl \
              << "* Near an old station a bunch of mens and womens are lurking slowly *" << std::endl << std::endl;

    souad.action( "intimidatingShout", "3ab Ali" );

    std::cout << std::endl \
              << "* the group pick up their weapons and the fight begin *" << std::endl \
              << "Souad: Yo fu*k**s wanna fight yo got ONE, BLOOD BLOOD BLOOD ...." << std::endl << std::endl;

    oussama.action( "rangedAttack", "3ab Ali" );
    anas.action( "rangedAttack", "Othman" );
    ilyas.action( "meleeAttack", "Zoubida" );

    std::cout << std::endl \
              << "* The rest of the group are running to tell their leader about this attack *" << std::endl \
              << "Anas: gj" << std::endl \
              << "Oussama: gg ez" << std::endl;
    
    return 0;
}