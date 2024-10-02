#include "FragTrap.hpp"

int main()
{
    ClapTrap Claptrap("Joe");
	ScavTrap Scavtrap("Paul");
	FragTrap Fragtrap("Richard");

    for(int i = 0;i < 8; i++)
        {Claptrap.attack("Paul");
		Claptrap.attack("Richard");}
    Claptrap.takeDamage(1);
    Claptrap.takeDamage(99);
	Claptrap.info();
	for(int i = 0;i < 12; i++)
        {Scavtrap.attack("Joe");
		Scavtrap.attack("Richard");}
	Scavtrap.takeDamage(62);
	Scavtrap.guardGate();
	Scavtrap.info();
	for(int i = 0;i < 14; i++)
		{Fragtrap.attack("Joe");
		Fragtrap.attack("Paul");}
	Fragtrap.takeDamage(70);
	Fragtrap.highFivesGuys();
	Fragtrap.info();
}
