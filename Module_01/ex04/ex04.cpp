/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 05:46:39 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:53:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int     main( void ) {

    std::string     msg = "HI THIS IS BRAIN";
    std::string *   ptr_msg = &msg;
    std::string &   ref_msg = msg;

    std::cout << "Message: [" << msg << "]" << std::endl \
              << "Print the message from:" << std::endl \
              << "- pointer  : [" << *ptr_msg << "]" << std::endl \
              << "- reference: [" << ref_msg << "]" << std::endl;

    return 0;
}