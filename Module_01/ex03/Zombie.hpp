/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:00:26 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/31 05:43:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ZOMBIE_H
# define    ZOMBIE_H

# include <string>

class   Zombie {

    private:
        static std::string  _rdNames[18];
        std::string         _name;
        std::string         _type;

    public:
        Zombie();
        ~Zombie();

        std::string     getName( void ) const ;
        std::string     getType( void ) const ;
        void            setName( std::string name );
        void            setType( std::string type );
        void            advert( void ) const ;
};

#endif