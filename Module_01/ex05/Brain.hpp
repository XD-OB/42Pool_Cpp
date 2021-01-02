/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 05:55:29 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 16:09:31 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     BRAIN_H
# define    BRAIN_H

# include <string>
# include <sstream>


class   Brain {

    public:
        Brain( void );
        ~Brain( void );

        std::string     identify( void ) const;
};

#endif