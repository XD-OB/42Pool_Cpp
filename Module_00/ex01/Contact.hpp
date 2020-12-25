/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 01:33:01 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/25 01:33:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CONTACT_H
# define    CONTACT_H

class   Contact {
    public:
        // Add infos:
        void    add_infos();
        // Getters:
        bool    getIs_full( void ) const;
        void    printFirst_name( void ) const;
        void    printLast_name( void ) const;
        void    printNickname( void ) const;
        void    printLogin( void ) const;
        void    printPostal_address( void ) const;
        void    printEmail_address( void ) const;
        void    printPhone_number( void ) const;
        void    printBirthday_date( void ) const;
        void    printFavorite_meal( void ) const;
        void    printUnderwear_color( void ) const;
        void    printDarkest_secret( void ) const;
        // Setters:
        bool    setFirst_name( char *value );
        bool    setLast_name( char *value );
        bool    setNickname( char *value );
        bool    setLogin( char *value );
        bool    setPostal_address( char *value );
        bool    setEmail_address( char *value );
        bool    setPhone_number( char *value );
        bool    setBirthday_date( char *value );
        bool    setFavorite_meal( char *value );
        bool    setUnderwear_color( char *value );
        bool    setDarkest_secret( char *value );
        // Print Short:
        void    printShortFirst_name( void ) const;
        void    printShortLast_name( void ) const;
        void    printShortNickname( void ) const;
        void    printShortLogin( void ) const;
        void    printShortPostal_address( void ) const;
        void    printShortEmail_address( void ) const;
        void    printShortPhone_number( void ) const;
        void    printShortBirthday_date( void ) const;
        void    printShortFavorite_meal( void ) const;
        void    printShortUnderwear_color( void ) const;
        void    printShortDarkest_secret( void ) const;

    private:
        bool    _is_full = false;
        char    _first_name[50];
        char    _last_name[50];
        char    _nickname[50];
        char    _login[50];
        char    _postal_address[50];
        char    _email_address[50];
        char    _phone_number[50];
        char    _birthday_date[50];
        char    _favorite_meal[50];
        char    _underwear_color[50];
        char    _darkest_secret[50];
};

#endif