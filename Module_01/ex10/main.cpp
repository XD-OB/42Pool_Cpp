/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 04:09:01 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 14:32:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cato9tails.hpp"


int     main( int argc, char **argv ) {
    
    if ( argc > 1 )
        for ( int i = 1; i < argc; i++ )
            cat_file( argv[i] );
    else
        cat_stdin();

    return 0;
}
