#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	 main(void)
{
	ScavTrap robot("Steve");
	FragTrap robot2;

	robot2 = FragTrap ("Carl");

	robot.attack("Mark");
	robot.takeDamage(5);
	robot.beRepaired(2);
	robot.takeDamage(10);
	robot.attack("John");
	robot.beRepaired(2);
	robot.guardGate();

	robot2.attack("Mark");
	robot2.takeDamage(5);
	robot2.beRepaired(2);
	robot2.takeDamage(10);
	robot2.attack("John");
	robot2.beRepaired(2);
	robot2.highFivesGuys();


	return (0);
}
