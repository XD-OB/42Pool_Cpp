/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 06:35:45 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 06:59:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMAN_H
# define    HUMAN_H

# include "Brain.hpp"

class   Human {

    public:

        Human( void );
        ~Human( void );

        Brain const     _brain;

        std::string     identify( void ) const;
        Brain const     &getBrain( void ) const;
};

#endif