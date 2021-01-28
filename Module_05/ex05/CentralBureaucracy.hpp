/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 19:12:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CENTRALBUREAUCRACY_H
# define    CENTRALBUREAUCRACY_H

# include "OfficeBlock.hpp"
# include <string>

typedef struct          s_targetWL
{
    std::string             target;
    struct s_targetWL *     next;
}                       t_targetWL;

typedef struct          s_bureaucratWL
{
    Bureaucrat *            bureaucrat;
    struct s_bureaucratWL * next;
}                       t_bureaucratWL;

class   CentralBureaucracy
{
    private:
        static std::string  _works[3];

        int                 _nbrFullOffices;
        int                 _nbrBureaucrats;
        int                 _nbrTargets;
        OfficeBlock         _central[20];
        t_bureaucratWL *    _bureaucratWL;
        t_targetWL *        _targetWL;

        void        _doUnitBureaucracy( std::string const & target ) const ;
        
        void        _destroyBWL( void );
        void        _destroyTWL( void );
        void        _fireCentralInterns( void );
        void        _copyCentral( CentralBureaucracy const & src );
        void        _copyBWL( CentralBureaucracy const & src );
        void        _copyTWL( CentralBureaucracy const & src );       
        void        _pushBWL( Bureaucrat * Bureaucrat );

    public:
        CentralBureaucracy( void );
        CentralBureaucracy( CentralBureaucracy const & src );
        virtual ~CentralBureaucracy( void );

        // Operators
        CentralBureaucracy &      operator=( CentralBureaucracy const & rhs );

        // Getters
        int             getNbrFullOffices( void ) const;
        int             getNbrBureaucrats( void ) const;
        int             getNbrTargets( void ) const;
        OfficeBlock *   getOffice( int index ) const;

        // Member functions
        void        showBWL( void ) const;
        void        showTWL( void ) const;
        void        feed( Bureaucrat & bureaucrat );
        void        queueUp( std::string const & target );
        void        fireBureaucrat( void );
        void        doBureaucracy( void ) const;

        // Exceptions

};

std::ostream &  operator<<( std::ostream & os, CentralBureaucracy const & rhs );

#endif