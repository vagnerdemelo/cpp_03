#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default constructor called" << '\n';
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
	std::cout << "ClapTrap " << this->_name << " toke " << amount << " points of damage!" <<'\n';
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
