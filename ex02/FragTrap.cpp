#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default constructor called" << '\n';

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called" << '\n';
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap: Copy assignment operator called" << '\n';

	if (this != &other)
		ClapTrap::operator=(other);

	return *this;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap: String constructor called" << '\n';

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << '\n';
}

void FragTrap::attack(const std::string &target)
{
	if (!(this->_energyPoints > 0 && this->_hitPoints > 0))
		{
			std::cout << "FragTrap " << this->_name << " without energy points and/or hit points enough to attack" << '\n';
			return;
		}

	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<'\n';
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: Give a High Five! " << '\n';
}
