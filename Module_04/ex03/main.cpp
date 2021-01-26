/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 05:54:06 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:14:00 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int     main( void )
{
    IMateriaSource *    src = new MateriaSource();
    
    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );
    
    ICharacter *        moi = new Character( "moi" );
    AMateria *          tmp;
    
    tmp = src->createMateria( "ice" );
    moi->equip( tmp );
    tmp = src->createMateria( "cure" );
    moi->equip( tmp );
    
    ICharacter* bob = new Character("bob");
    
    moi->use(0, *bob);
    moi->use(1, *bob);

    delete bob;
    delete moi;
    delete src;
    
    return 0;
}