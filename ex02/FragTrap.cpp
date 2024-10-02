#include "FragTrap.hpp"

FragTrap::FragTrap(){
std::cout << "FragTrap Default constructor" << std::endl;}

FragTrap::FragTrap(FragTrap const &src){
	std::cout << "FragTrap Constructor copy" << std::endl;
	*this = src;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name){
	std::cout << "Fragtrap named " << _name << " created" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &frag){
this->_attackDamage = frag._attackDamage;
this->_energyPoints = frag._energyPoints;
this->_name = frag._name;
this->_hitPoints = frag._hitPoints;
return *this;
}
FragTrap::~FragTrap(){
	std::cout << "Fragtrap named " << _name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << GREEN <<"Hello i'm " << _name << " give me a high five!" << RESET << std::endl;
}
