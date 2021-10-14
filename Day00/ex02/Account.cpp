#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::Account()
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_amount = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed\n";
};

void Account::_displayTimestamp( void )
{
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buf << "] ";
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << getNbAccounts();
	std::cout << ";total:";
	std::cout << getTotalAmount();
	std::cout << ";deposits:";
	std::cout << getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << getNbWithdrawals();
	std::cout << "\n";
}

void	Account::makeDeposit( int deposit )
{
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex ;
	std::cout << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
	std::cout << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->checkAmount())
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:refused\n";
		return (false);
	}
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
	std::cout << ";withdrawal:" << withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << "\n";
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->_amount;
	std::cout << ";deposits:";
	std::cout << this->_nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << this->_nbWithdrawals;
	std::cout << "\n";
}



