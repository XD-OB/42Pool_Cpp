/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 05:55:29 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 06:53:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     BRAIN_H
# define    BRAIN_H

# include <string>
#include <sstream>


class   Brain {

    private:
        // in kg (~1.5kg)
        float   _weight;
        // volume in cm3 (1200 cm3)
        float   _volume;

    public:
        Brain( void );
        ~Brain( void );

        std::string     identify( void ) const;
};

#endif