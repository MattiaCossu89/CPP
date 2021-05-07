#include "Account.class.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_checkAmountCall = 0;

void	Account::_displayTimestamp( void )
{
	time_t my_time = time(NULL);
	tm *real = localtime(&my_time);
	std::cout	<< "[" << real->tm_year + 1900
				<< (real->tm_mon + 1 < 10 ? "0" : "") << real->tm_mon + 1
				<< (real->tm_mday < 10 ? "0" : "") << real->tm_mday << "_"
				<< (real->tm_hour < 10 ? "0" : "") << real->tm_hour
				<< (real->tm_min < 10 ? "0" : "") << real->tm_min
				<< (real->tm_sec < 10 ? "0" : "") << real->tm_sec << "] ";
};

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
};

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
};

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
};

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
};

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts()
				<< ";total:" << Account::getTotalAmount()
				<< ";deposits:" << Account::getNbDeposits()
				<< ";withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
};


Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->checkAmount()
				<< ";created" << std::endl;
};

Account::~Account( void )
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -=  this->_nbWithdrawals;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->checkAmount()
				<< ";closed" << std::endl;
};


void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << this->checkAmount()
				<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout	<< ";amount:" << this->checkAmount()
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << this->checkAmount()
				<< ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout	<< withdrawal
				<< ";amount:" << this->checkAmount()
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
};

int		Account::checkAmount( void ) const
{
	this->_checkAmountCall++;
	return (this->_amount);
};

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->checkAmount()
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
};
