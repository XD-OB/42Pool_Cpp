/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 19:31:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*
**  Static       ==============================================================
*/

std::string     CentralBureaucracy::_works[3] = {
	"presidential pardon",
	"robotomy request",
    "shrubbery creation"
};

/*
**  Constructors ==============================================================
*/

CentralBureaucracy::CentralBureaucracy( void ) :
    _nbrFullOffices(0),
    _nbrBureaucrats(0),
    _nbrTargets(0),
    _bureaucratWL(NULL),
    _targetWL(NULL)
{
    srand( time(NULL) );
}

CentralBureaucracy::CentralBureaucracy( CentralBureaucracy const & src )
{
    *this = src;
}

/*
**  Destructor  ===============================================================
*/

CentralBureaucracy::~CentralBureaucracy( void )
{
    this->_fireCentralInterns();
    this->_destroyBWL();
    this->_destroyTWL();
}

/*
**  Operators   ===============================================================
*/

CentralBureaucracy &    CentralBureaucracy::operator=( CentralBureaucracy const & rhs )
{
    if ( this != &rhs ) {
        this->_nbrBureaucrats = rhs.getNbrBureaucrats();
        this->_copyCentral(rhs);
        this->_copyBWL(rhs);
        this->_copyTWL(rhs);
    }
    return *this;
}

std::ostream &          operator<<( std::ostream & os, CentralBureaucracy const & rhs )
{
    std::cout << " ==> Central Bureaucracy:" << std::endl;
    std::cout << "Number of full offices: " << rhs.getNbrFullOffices() << std::endl;
    std::cout << "Number of bureaucrats: " << rhs.getNbrBureaucrats() << std::endl;
    std::cout << "Number of targets: " << rhs.getNbrTargets() << std::endl;
    rhs.showBWL();
    rhs.showTWL();
    return os;
}   

/*
**  Getters     ===============================================================
*/

int         CentralBureaucracy::getNbrFullOffices( void )
const {
    return this->_nbrFullOffices;
}

int         CentralBureaucracy::getNbrBureaucrats( void )
const {
    return this->_nbrBureaucrats;
}

int         CentralBureaucracy::getNbrTargets( void )
const {
    return this->_nbrTargets;
}

OfficeBlock *   CentralBureaucracy::getOffice( int index )
const {
    if ( index < 0 || index > 19 ) return NULL;
    return (OfficeBlock*)&this->_central[index];
}

/*
**  Member functions ==========================================================
*/
// Public:

void        CentralBureaucracy::showBWL( void )
const {
    t_bureaucratWL *    current = this->_bureaucratWL;

    std::cout << "Bueraucrats Waiting List:" << std::endl;

    if ( !current )
        std::cout << "Empty!" << std::endl;

    std::cout << "Oooh littles ones waiting for a seat in the central :(" << std::endl;
    while ( current ) {
        std::cout << current->bureaucrat << std::endl;
        current = current->next;
    }
}

void        CentralBureaucracy::showTWL( void )
const {
    t_targetWL *        current = this->_targetWL;

    std::cout << "Targets Waiting List:" << std::endl;

    if ( !current )
        std::cout << "Empty!" << std::endl;

    std::cout << "Miserables people waiting for their work to be done :(" << std::endl;
    while ( current ) {
        std::cout << current->target << std::endl;
        current = current->next;
    }
}

void        CentralBureaucracy::feed( Bureaucrat & bureaucrat )
{
    Intern          *idiot = new Intern;
    int             nbrBlock;
    int             post;

    if ( this->_nbrBureaucrats < 40 ) {
        nbrBlock = this->_nbrBureaucrats / 2;
        post = this->_nbrBureaucrats % 2;
        
        if ( !post ) this->_central[ nbrBlock ].setSigner( &bureaucrat );
        else  {
            this->_central[ nbrBlock ].setExecutor( &bureaucrat );
            this->_central[ nbrBlock ].setIntern( idiot );
            this->_nbrFullOffices++;
        }
            
    }
    else this->_pushBWL( &bureaucrat );
    
    this->_nbrBureaucrats++;
}

void        CentralBureaucracy::queueUp( std::string const & target )
{
    t_targetWL *    room = new t_targetWL;
    t_targetWL *    curr = this->_targetWL;

    room->target = target;
    room->next = NULL;

    if ( !curr ) this->_targetWL = room;
    else {
       while ( curr->next ) curr = curr->next;
       curr->next = room;
    }
    
    this->_nbrTargets++;
}

void        CentralBureaucracy::fireBureaucrat( void )
{
    int     indexOffice;

    if ( this->_nbrFullOffices == 0 ) {
        std::cout << "Central Bureaucracy: No one to fire!" << std::endl;
        return ;
    }

    std::cout << "Central Bureaucracy: BAD WORK!! BAD WORK!! i will fire someone!" << std::endl;
    
    if ( this->_nbrBureaucrats < 41 ) {
        indexOffice = this->_nbrBureaucrats / 2;
        
        if ( this->_central[ indexOffice ].getExecutor() )
        {
            this->_central[ indexOffice ].setExecutor( NULL );
            delete this->_central[ indexOffice ].getIntern();
            this->_nbrFullOffices--;
        }
        else
            this->_central[ indexOffice ].setSigner( NULL );
        this->_nbrBureaucrats--;
    }
    else
    {
        indexOffice = rand() % this->_nbrFullOffices;

        if ( rand() % 2 ) this->_central[ indexOffice ].setSigner( this->_bureaucratWL->bureaucrat );
        else              this->_central[ indexOffice ].setExecutor( this->_bureaucratWL->bureaucrat );
    }
}

void        CentralBureaucracy::doBureaucracy( void )
const {
    t_targetWL *    current = this->_targetWL;

    // Empty Central
    if ( !this->_nbrFullOffices ) {
        std::cout << "Central Bureaucracy: There is no available office." << std::endl;
        return ;
    }

    // No Targets
    if ( !this->_targetWL ) {
       std::cout << "Central Bureaucracy: There is no targets that mean NO WORK :)" << std::endl;
        return ;
    }

    while ( current ) {
        try {
            this->_doUnitBureaucracy( current->target );
            current = current->next;
        }
        catch ( OfficeBlock::SignerGradeLowException & e )
        {
            std::cout << "Central Bureaucracy: " << e.what() << std::endl;
        }
        catch ( OfficeBlock::ExecutorGradeLowException & e )
        {
            std::cout << "Central Bureaucracy: " << e.what() << std::endl;
        }
        catch ( std::exception & e )
        {
            std::cout << "Central Bureaucracy: " << e.what() << std::endl;   
        }
    }
}

// Private:

void        CentralBureaucracy::_doUnitBureaucracy( std::string const & target )
const {
    int             index = rand() % this->_nbrFullOffices;

    this->getOffice( index )->doBureaucracy(
        CentralBureaucracy::_works[ rand() % 3 ],
        target
    );    
}

void        CentralBureaucracy::_destroyBWL( void )
{
    t_bureaucratWL *    tmp;

    while ( this->_bureaucratWL )
    {
        tmp = this->_bureaucratWL;
        this->_bureaucratWL = this->_bureaucratWL->next;
        delete tmp;
    }
    this->_bureaucratWL = NULL;
}

void        CentralBureaucracy::_destroyTWL( void )
{
    t_targetWL *    tmp;

    while ( this->_targetWL )
    {
        tmp = this->_targetWL;
        this->_targetWL = this->_targetWL->next;
        delete tmp;
    }
    this->_targetWL = NULL;
}

void        CentralBureaucracy::_fireCentralInterns( void )
{
    for ( int i = 0; i < this->_nbrFullOffices; i++ )
        delete this->_central[i].getIntern();
}

void        CentralBureaucracy::_copyCentral( CentralBureaucracy const & src )
{
    Intern *    idiot;

    for ( int i = 0; i < 20; i++ ) {
        idiot = new Intern( *src._central[i].getIntern() );
        this->_central[i].setIntern( idiot );
        this->_central[i].setSigner( src._central[i].getSigner() );
        this->_central[i].setExecutor( src._central[i].getExecutor() );
    }
    this->_nbrFullOffices = src.getNbrFullOffices();
}

void        CentralBureaucracy::_copyBWL( CentralBureaucracy const & src )
{
    this->_destroyBWL();

    if ( !src._bureaucratWL ) return ;

    while ( src._bureaucratWL )
        this->_pushBWL( src._bureaucratWL->bureaucrat );
}

void        CentralBureaucracy::_copyTWL( CentralBureaucracy const & src )
{
    this->_destroyTWL();

    if ( !src._targetWL ) return ;

    while ( src._targetWL )
        this->queueUp( src._targetWL->target ); 

    this->_nbrTargets = src.getNbrTargets();
}

void        CentralBureaucracy::_pushBWL( Bureaucrat * bureaucrat )
{
    t_bureaucratWL *    room = new t_bureaucratWL;
    t_bureaucratWL *    curr = this->_bureaucratWL;

    room->bureaucrat = bureaucrat;
    room->next = NULL;

    if ( !curr ) this->_bureaucratWL = room;
    else {
        while ( curr->next ) curr = curr->next;
        curr->next = room;
    }
}

/*
**  Exceptions  ===============================================================
*/
