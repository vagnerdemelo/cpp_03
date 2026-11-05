#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n=== TEST 1: PARAMETERIZED CONSTRUCTOR ===\n";
    DiamondTrap robot("Mark");
    robot.whoAmI();

    std::cout << "\n=== TEST 2: DEFAULT CONSTRUCTOR ===\n";
    DiamondTrap robot2;

    std::cout << "\n=== TEST 3: COPY CONSTRUCTOR ===\n";
    DiamondTrap robot3(robot);
    robot3.whoAmI();

    std::cout << "\n=== TEST 4: COPY ASSIGNMENT ===\n";
    robot2 = robot;
    robot2.whoAmI();

    std::cout << "\n=== TEST 5: SELF ASSIGNMENT ===\n";
    DiamondTrap &ref = robot;
    robot = ref;
    robot.whoAmI();

    std::cout << "\n=== TEST 6: ATTACK ===\n";
    robot.attack("Enemy");

    std::cout << "\n=== TEST 7: TAKE DAMAGE ===\n";
    robot.takeDamage(40);

    std::cout << "\n=== TEST 8: REPAIR ===\n";
    robot.beRepaired(20);

    std::cout << "\n=== TEST 9: SCAVTRAP SPECIAL ABILITY ===\n";
    robot.guardGate();

    std::cout << "\n=== TEST 10: FRAGTRAP SPECIAL ABILITY ===\n";
    robot.highFivesGuys();

    std::cout << "\n=== TEST 11: ZERO HIT POINTS ===\n";
    robot.takeDamage(200);
    robot.attack("Enemy");
    robot.beRepaired(10);

    std::cout << "\n=== TEST 12: ENERGY EXHAUSTION ===\n";
    DiamondTrap robot4("EnergyTest");

    for (int i = 0; i < 51; i++)
        robot4.ScavTrap::attack("Enemy");

    std::cout << "\n=== TEST 13: INDEPENDENT COPY ===\n";
    robot3.whoAmI();
    robot3.ScavTrap::attack("Enemy");

    std::cout << "\n=== TEST 14: DESTRUCTOR ORDER ===\n";
    return (0);
}
