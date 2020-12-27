/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:33:01 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:33:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CONTACT_H
# define    CONTACT_H

# include <string>
# include <iostream>


class       Contact {

    private:
        bool            _is_empty;
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _login;
        std::string     _postal_address;
        std::string     _email_address;
        std::string     _phone_number;
        std::string     _birthday_date;
        std::string     _favorite_meal;
        std::string     _underwear_color;
        std::string     _darkest_secret;

    public:
        Contact();
        ~Contact();
        
        void            print( void ) const;
        void            add_infos( void );
        bool            getIs_empty( void ) const;
        // Getters:
        std::string     getFirst_name( void ) const;
        std::string     getLast_name( void ) const;
        std::string     getNickname( void ) const;
        std::string     getLogin( void ) const;
        std::string     getPostal_address( void ) const;
        std::string     getEmail_address( void ) const;
        std::string     getPhone_number( void ) const;
        std::string     getBirthday_date( void ) const;
        std::string     getFavorite_meal( void ) const;
        std::string     getUnderwear_color( void ) const;
        std::string     getDarkest_secret( void ) const;
        // Setters:
        bool            setFirst_name( std::string first_name );
        bool            setLast_name( std::string last_name );
        bool            setNickname( std::string nickname );
        bool            setLogin( std::string login );
        bool            setPostal_address( std::string postal_address );
        bool            setEmail_address( std::string email_address );
        bool            setPhone_number( std::string phone_number );
        bool            setBirthday_date( std::string birthday_date );
        bool            setFavorite_meal( std::string favorite_meal );
        bool            setUnderwear_color( std::string underwear_color );
        bool            setDarkest_secret( std::string darkest_secret );
};

#endif