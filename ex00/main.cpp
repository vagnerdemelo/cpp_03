#include "ClapTrap.hpp"

int	 main(void)
{

	ClapTrap robot("Steve");
	ClapTrap robot2;
	ClapTrap robot3(robot);

	robot2 = ClapTrap ("Carl");

	robot.attack("Mark");
	robot.takeDamage(5);
	robot.beRepaired(2);
	robot.takeDamage(10);
	robot.attack("John");
	robot.beRepaired(2);

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
