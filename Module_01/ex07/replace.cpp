/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 22:10:54 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 00:10:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// Replace the sub string s1 --> s2 in the str:

std::string     replace( std::string str, std::string s1, std::string s2 ) {
    
    size_t      index = 0;
    
    while ( true ) {
        // Locate the substring to replace
        index = str.find(s1, index);
        if ( index == std::string::npos ) break ;
        // Make the replacement:
        str.replace(index, s1.length(), s2);
        // Advance the index:
        index += s2.length();
    }
    
    return  str;
}