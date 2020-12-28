/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 04:26:15 by obelouch          #+#    #+#             */
/*   Updated: 2020/12/28 18:45:50 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


// Init Class Variables:
int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;


Account::Account( int init_deposit ) : _accountIndex(Account::_nbAccounts), _amount(init_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    
    Account::_totalAmount += init_deposit;
    Account::_nbAccounts++;
    // display the log 'created':
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex \
                << ";amount:" << this->_amount 
                << ";created" << std::endl;
}

Account::~Account( void ) {
    // display the log 'closed':
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
                << ";amount:" << this->_amount 
                << ";closed" << std::endl;
}

int     Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int     Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int     Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

int     Account::checkAmount( void ) const {
    return this->_amount;
}

void    Account::makeDeposit( int deposit ) {
    // display the log 'deposit':
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
                << ";p_amount:" << this->_amount 
                << ";deposit:" << deposit;
    
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;

    std::cout << ";amount:" << this->_amount \
                << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal ) {
    // display the log 'withdrawal':
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
                << ";p_amount:" << this->_amount 
                << ";withdrawal:" ;

    if ( this->_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return false;
    }
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;

    std::cout << withdrawal << ";amount:" << this->_amount \
                << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

    return true;
}

void    Account::displayStatus( void ) const {
    // Display the log 'status'
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex \
                << ";amount:" << this->_amount \
                << ";deposits:" << this->_nbDeposits \
                << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void ) {
    // Get the current data-time based on current system
    time_t      t = time(0);
    // Convert t to tm struct
    struct tm   *now = localtime(&t);
    
    std::cout << '[' << now->tm_year + 1900 \
			<< std::setw(2) << std::setfill('0') << now->tm_mon \
			<< std::setw(2) << std::setfill('0') << now->tm_mday << '_' \
			<< std::setw(2) << std::setfill('0') << now->tm_hour
			<< std::setw(2) << std::setfill('0') << now->tm_min
			<< std::setw(2) << std::setfill('0') << now->tm_sec \
            << "] ";
}

void    Account::displayAccountsInfos( void ) {
    // display the log 'All status'
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts \
                << ";total:" << Account::_totalAmount \
                << ";deposits:" << Account::_totalNbDeposits \
                << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}