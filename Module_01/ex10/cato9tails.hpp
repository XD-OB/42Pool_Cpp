/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cato9tails.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:29:48 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 14:32:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CATO9TAILS_H
# define    CATO9TAILS_H

# include <sys/stat.h>
# include <unistd.h>
# include <iostream>
# include <fstream>
# include <string>

void    cat_file( std::string filename );
void    cat_stdin( void );

#endif