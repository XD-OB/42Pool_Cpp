/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 03:12:59 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 17:31:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <stdexcept>
#include <iostream>
#include <cstdlib>


void    exec_doBureaucracy(
    OfficeBlock & ob,
    std::string const & formName,
    std::string const & target
) {
    try
    {
        ob.doBureaucracy(formName, target);
    }
    catch( OfficeBlock::NoInternException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::NoSignerException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::NoExecutorException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::FormNotMadeException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::SignerGradeLowException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( OfficeBlock::ExecutorGradeLowException & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
    catch( std::exception & e )
    {
        std::cout << "Office Block Error: " << e.what() << std::endl;
    }
}

int     main( void )
{
    std::cout << "------------ In a world dominated by Bureaucracy ep 5: 'The Office Block' -----------" \
              << std::endl << std::endl;

    Bureaucrat      oussama = Bureaucrat("Oussama Belouche", 10);
    Bureaucrat      anas = Bureaucrat("Anas Elouargui", 54);
    Bureaucrat      ali = Bureaucrat("Ali Zabadi", 150);
    Intern          idiotOne;

    OfficeBlock     ob_perfect;
    OfficeBlock     ob_noIntern(NULL, &anas, &oussama);
    OfficeBlock     ob_noSigner(&idiotOne, NULL, &oussama);
    OfficeBlock     ob_noExecutor(&idiotOne, &anas, NULL);
    OfficeBlock     ob_lowSigner(&idiotOne, &ali, &oussama);
    OfficeBlock     ob_lowExecutor(&idiotOne, &anas, &ali);
    
    ob_perfect.setIntern(idiotOne);
    ob_perfect.setSigner(anas);
    ob_perfect.setExecutor(oussama);
    
    // Perfect Office Block
    std::cout << "------ Perfect Office Block --------------------------- " << std::endl;
    exec_doBureaucracy(ob_perfect, "shrubbery creation", "One");
    std::cout << std::endl;

    // Perfect Office Block but Wrong Form Type
    std::cout << "------ Perfect Office Block but Wrong Form Type ------- " << std::endl;
    exec_doBureaucracy(ob_perfect, "flushy pushy", "Two");
    std::cout << std::endl;

    // Office Block without an Intern
    std::cout << "------ Perfect Office Block without an Intern --------- " << std::endl;
    exec_doBureaucracy(ob_noIntern, "shrubbery creation", "Three");
    std::cout << std::endl;

    // Office Block without a Signer
    std::cout << "------ Perfect Office Block without a Signer ---------- " << std::endl;
    exec_doBureaucracy(ob_noSigner, "shrubbery creation", "Four");
    std::cout << std::endl;
    
    // Office Block without an Executor
    std::cout << "------ Perfect Office Block without an Executor ------- " << std::endl;
    exec_doBureaucracy(ob_noExecutor, "shrubbery creation", "Five");
    std::cout << std::endl;

    // Office Block with Low Grade Signer
    std::cout << "------ Perfect Office Block with Low Grade Signer ----- " << std::endl;
    exec_doBureaucracy(ob_lowSigner, "shrubbery creation", "Six");
    std::cout << std::endl;

    // Office Block with Low Grade Executor
    std::cout << "------ Perfect Office Block with Low Grade Executor --- " << std::endl;
    exec_doBureaucracy(ob_lowExecutor, "shrubbery creation", "Seven");
    std::cout << std::endl;

    return 0;
}