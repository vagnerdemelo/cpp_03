#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	ScavTrap(std::string name);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif
