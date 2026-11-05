#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	FragTrap(std::string name);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
