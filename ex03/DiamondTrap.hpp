#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	DiamondTrap(std::string name);
	~DiamondTrap();

	void attack(const std::string& target);
	void whoAmI();
};

#endif
