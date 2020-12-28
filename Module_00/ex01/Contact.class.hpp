/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:33:01 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/28 03:46:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CONTACT_H
# define    CONTACT_H

# include <string>
# include <iostream>

using namespace     std;

#define     EMAIL_MSG   "* Error: Wrong email format!"
#define     ALPHA_MSG   "* Error: Wrong input it should contain only alphabets!"
#define     PHONE_MSG   "* Error: Wrong phone number format! shoud contain only [+0123456789]"
#define     UNKW_CMD_MGS    "* Error: Unknown command used!"
#define     NICKNAME_MSG    "* Error: Empty Nickname! The Nickname is mondatory if the name is empty!"
#define     INVALID_MSG     "* Error: Invalid Input!"

class       Contact {

    private:
        bool        _is_empty;
        string      _first_name;
        string      _last_name;
        string      _nickname;
        string      _login;
        string      _postal_address;
        string      _email_address;
        string      _phone_number;
        string      _birthday_date;
        string      _favorite_meal;
        string      _underwear_color;
        string      _darkest_secret;

    public:
        Contact();
        ~Contact();
        
        void        print( void ) const;
        void        add_infos( void );
        bool        getIs_empty( void ) const;
        // Getters:
        string      getFirst_name( void ) const;
        string      getLast_name( void ) const;
        string      getNickname( void ) const;
        string      getLogin( void ) const;
        string      getPostal_address( void ) const;
        string      getEmail_address( void ) const;
        string      getPhone_number( void ) const;
        string      getBirthday_date( void ) const;
        string      getFavorite_meal( void ) const;
        string      getUnderwear_color( void ) const;
        string      getDarkest_secret( void ) const;
        // Setters:
        bool        setFirst_name( string first_name );
        bool        setLast_name( string last_name );
        bool        setNickname( string nickname );
        bool        setLogin( string login );
        bool        setPostal_address( string postal_address );
        bool        setEmail_address( string email_address );
        bool        setPhone_number( string phone_number );
        bool        setBirthday_date( string birthday_date );
        bool        setFavorite_meal( string favorite_meal );
        bool        setUnderwear_color( string underwear_color );
        bool        setDarkest_secret( string darkest_secret );
};

#endif