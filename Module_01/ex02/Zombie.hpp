/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:00:26 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 02:51:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ZOMBIE_H
# define    ZOMBIE_H

# include <string>

class   Zombie {

    private:
        std::string     _name;
        std::string     _type;

    public:
        Zombie(
            std::string name,
            std::string type
        );
        ~Zombie();

        void    advert( void ) const ;
};

#endif