/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 02:41:06 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 03:11:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <stdexcept>
#include <iostream>


int     main( void )
{
    Bureaucrat      hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat      bob = Bureaucrat("Bobby Bobson", 123);
    Intern          idiotOne;
    OfficeBlock     ob;
    
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);
    
    try
    {
        ob.doBureaucracy("shrubbery creation", "Pigley");
    }
    catch( OfficeBlock::SignerGradeLowException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::ExecutorGradeLowException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::FormNotMadeException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( std::exception & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }

    return 0;
}