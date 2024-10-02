#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
std::cout << "ScavTrap class called"<< std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &src){
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
std::cout << "Scavtrap named " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
std::cout << "ScavTrap named " << _name << " destructed"<< std::endl;

}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scav) {
	this->_name = scav._name;
	this->_hitPoints = scav._hitPoints;
	this->_energyPoints = scav._energyPoints;
	this->_attackDamage = scav._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target){
	if (this->_hitPoints == 0){
		  std::cerr << RED << "💀ScavTrap " << _name << " has no hit points left and can't do anything!"<< RESET << std::endl;
		return ;}
	if (this->_energyPoints == 0){
		std::cerr <<YELLOW << "🔋ScavTrap " <<_name << " has no more energy left and can't do anything!❌" <<RESET<< std::endl;
		return ;}
	std::cout <<  BLUE << "ScavTrap " <<_name << " attacks " << target <<", causing " << _attackDamage<< " points of damage!⚔️" <<RESET<< std::endl;
	this->_energyPoints--;
std::cout  <<YELLOW << "🔋Energy points left : " << _energyPoints << std::endl<< std::endl;
}

void ScavTrap::guardGate(){
std::cout << CYAN << BOLD << "ScavTrap " << _name << " enter in Gate keeper mode" << RESET << std::endl;
}


