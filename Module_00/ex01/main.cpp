/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:51:09 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:51:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"


int     main() {

    Phonebook   phonebook;
    string      buffer;

    phonebook.welcome();
    while ( true ) {
        phonebook.prompt();
        getline( cin, buffer );
        if ( !buffer.compare( "SEARCH" ) )
            phonebook.search();
        else if ( !buffer.compare( "ADD" ) )
            phonebook.addContact();
        else if ( !buffer.compare( "EXIT" ) )
            phonebook.exit();
    }
    return 0;
}