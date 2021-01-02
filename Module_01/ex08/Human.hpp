/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 00:54:25 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/02 03:06:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMAN_H
# define    HUMAN_H

# include <iostream>
# include <string>

struct  t_attack;

class   Human {

    private:
        static t_attack _attacks[3];
        std::string     _name;

        void            _meleeAttack( std::string const & target );
        void            _rangedAttack( std::string const & target );
        void            _intimidatingShout( std::string const & target );

    public:
        Human( std::string name );
        ~Human( void );

        std::string     getName( void ) const;
        void            action( std::string const & action_name, std::string const & target );
};


#endif