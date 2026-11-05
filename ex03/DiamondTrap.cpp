#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default constructor called." << '\n';
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap: Copy constructor called" << '\n';
	this->_name = other._name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	
	return *this;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap: String constructor called" << '\n';

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << '\n';
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << ". ClapTrap name is " << this->ClapTrap::_name << '\n';
}
