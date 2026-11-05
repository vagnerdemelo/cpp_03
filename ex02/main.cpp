#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	 main(void)
{
	ScavTrap robot("Steve");
	ScavTrap robot2;
	ScavTrap robot3(robot);

	robot2 = ScavTrap ("Carl");

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

	robot3.attack("Mark");
	robot3.takeDamage(5);
	robot3.beRepaired(2);
	robot3.takeDamage(10);
	robot3.attack("John");
	robot3.beRepaired(2);

	return (0);
}
