#include "ClapTrap.hpp"

int main()
{
    ClapTrap Walle("Joe");

    for(int i = 0;i < 8; i++)
        Walle.attack("Eugene");
    Walle.beRepaired(10);
    Walle.takeDamage(1);
    //error
    Walle.takeDamage(-1);
    Walle.beRepaired(-1);
    ///////
    Walle.takeDamage(8);
    Walle.beRepaired(9);
    Walle.takeDamage(8);
    Walle.attack("Eugene");
    Walle.attack("Eugene");

}