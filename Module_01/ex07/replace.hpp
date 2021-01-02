/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 22:07:57 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/01 22:11:47 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     REPLACE_H
# define    REPLACE_H

# include <iostream>
# include <fstream>
# include <string>

// Errors macros:
# define ERROR_ARGC  1
# define ERROR_STR1  2
# define ERROR_STR2  3
# define ERROR_IFILE  4
# define ERROR_OFILE  5


std::string     replace( std::string str, std::string s1, std::string s2 );

#endif