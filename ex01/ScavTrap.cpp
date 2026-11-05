#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << '\n';

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: Copy constructor called" << '\n';

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap: Copy assignment operator called" << '\n';

	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return *this;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: String constructor called" << '\n';

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << '\n';
}

void ScavTrap::attack(const std::string &target)
{
	if (!(this->_energyPoints > 0 && this->_hitPoints > 0))
		{
			std::cout << "ScavTrap " << this->_name << " without energy points and/or hit points enough to attack" << '\n';
			return;
		}

	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<'\n';
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: Guard gate mode activated! " << '\n';
}
