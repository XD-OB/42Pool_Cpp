/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 05:54:06 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 17:59:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>


int     main( void )
{
    IMateriaSource *    src = new MateriaSource();
    Ice *               ice = new Ice();
    AMateria *          ica = ice->clone();
    Ice *               icy = new Ice(*ice);

    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );
    src->learnMateria( icy );
    src->learnMateria( ica );
    src->learnMateria( ice );

    ICharacter *        oussama = new Character( "oussama" );
    AMateria *          tmp;
    
    tmp = src->createMateria( "ice" );
    oussama->equip( tmp );
    tmp = src->createMateria( "cure" );
    oussama->equip( tmp );
    
    ICharacter*         anas = new Character("anas");
    
    std::cout << "New Character appear named: " << anas->getName() << std::endl;

    oussama->use(0, *anas);
    oussama->use(1, *anas);
    oussama->unequip(1);
    oussama->use(1, *anas);
    anas->use(100, *oussama);

    delete ice;
    delete ica;
    delete anas;
    delete oussama;
    delete src;

    return 0;
}