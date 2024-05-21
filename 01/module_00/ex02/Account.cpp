#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <cctype>

void	Account::_displayTimestamp()
{
	char buffer[20];
	std::time_t	now;
	std::time(&now);
	std::tm *time;
	time = localtime(&now);
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S]", time);
	std::cout << buffer << " ";
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_totalAmount+= initial_deposit;
	_accountIndex = Account::getNbAccounts();
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
				<< "amount:" << _amount << ";" \
				<< "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
				<< "amount:" << _amount << ";" \
				<< "closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() \
				<< ";amount:" << getTotalAmount() \
				<< ";deposits:" << getNbDeposits() \
				<< ";withdrawals:" << getNbWithdrawals() \
				<< std::endl;
}



void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" \
				<< _amount << ";deposit:" << deposit \
				<< ";amount:";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << std::endl << "this is total amount: " << _totalAmount << std::endl;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << _amount << ";nb_deposit:" << _nbDeposits << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
				<< _amount << ";deposits:" << _nbDeposits \
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" \
				<< _amount << ";withdrawal:";
	if (withdrawal < _amount)
	{
		 _amount -= withdrawal; 
		 _nbWithdrawals++;
		 _totalNbWithdrawals++;
		 _totalAmount -= withdrawal;
		 std::cout << withdrawal << ";amount:" << _amount \
		 			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true; 
	}
	else
	{
		std::cout << "refused" << std::endl;
		return false;
	}
}


int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }