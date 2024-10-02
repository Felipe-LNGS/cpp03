#include "ClapTrap.hpp"

int main()
{
    ClapTrap Walle("Joe");
	Walle.info();
    for(int i = 0;i < 8; i++)
        Walle.attack("Eugene");
    Walle.beRepaired(10);
    Walle.takeDamage(1);
    //error
    Walle.takeDamage(-1);
    Walle.beRepaired(-1);
    ///////
    Walle.takeDamage(42);
    Walle.takeDamage(5);
	Walle.attack("Eugene");
	Walle.info();
}
