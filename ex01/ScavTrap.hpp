#ifndef SLAV_TRAP_HPP
#define SLAV_CLAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
