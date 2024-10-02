#include "ScavTrap.hpp"

int main()
{
    ClapTrap Claptrap("Joe");
	ScavTrap Scavtrap("Paul");

    for(int i = 0;i < 4; i++)
        Claptrap.attack("Paul");
    Claptrap.takeDamage(1);
    Claptrap.takeDamage(99);
	Claptrap.beRepaired(2);
	Claptrap.info();
	for(int i = 0;i < 12; i++)
        Scavtrap.attack("Joe");
	Scavtrap.takeDamage(42);
	Scavtrap.guardGate();
	Scavtrap.info();

}
