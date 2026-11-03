#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << '\n';

	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << '\n';

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << '\n';

	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return *this;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "String constructor called" << '\n';

	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << '\n';
}

void ClapTrap::attack(const std::string &target)
{
	if (!(this->_energyPoints > 0 && this->_hitPoints > 0))
		{
			std::cout << "ClapTrap " << this->_name << " without energy points and/or hit points enough to attack" << '\n';
			return;
		}

	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<'\n';
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(this->_hitPoints))
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" <<'\n';
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!(this->_energyPoints > 0 && this->_hitPoints > 0))
		{
			std::cout << "ClapTrap " << this->_name << " without energy points and/or hit points enough to repair himself" << '\n';
			return;
		}

	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points of hit!" <<'\n';
}
