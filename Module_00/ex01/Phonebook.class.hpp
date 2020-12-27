/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 04:35:58 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/27 04:35:58 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PHONEBOOK_H
# define    PHONEBOOK_H

# include "Contact.class.hpp"

const int   MAX_CONTACTS = 8;
const int   MAX_WIDTH = 10;

class Phonebook
{
    private:
        Contact     _contacts[MAX_CONTACTS];
        int         _size;
    
    public:
        Phonebook();
        ~Phonebook();

        void        addContact( void );
        void        exit( void ) const ;
        bool        isFull( void ) const ;
        void        print( void ) const ;
        void        search( void ) const ;
        void        prompt( void ) const ;
        void        welcome( void ) const ;
        Contact     getContact( int index ) const ;
};

#endif