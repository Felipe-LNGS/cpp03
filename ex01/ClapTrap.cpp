#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
std::cout << "Claptrap class called"<< std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "ClatTrap: Copy constructor called." << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(const std::string  name):_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20){
std::cout << "Claptrap named " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
std::cout << "Claptrap named " << _name << " destructed"<< std::endl;

}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clap) {
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target){
	if (this->_hitPoints == 0){
		  std::cerr << RED << "💀ClapTrap " << _name << " has no hit points left and can't do anything!"<< RESET << std::endl;
		return ;}
	if (this->_energyPoints == 0){
		std::cerr <<YELLOW << "🔋ClapTrap " <<_name << " has no more energy left and can't do anything!❌" <<RESET<< std::endl;
		return ;}
	std::cout <<  BLUE << "ClapTrap " <<_name << " attacks " << target <<", causing " << _attackDamage<< " points of damage!⚔️" <<RESET<< std::endl;
	this->_energyPoints--;
std::cout  <<YELLOW << "🔋Energy points left : " << _energyPoints << std::endl<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if ((int)amount < 0){
		std::cout<< RED << "Invalid amount!" << RESET <<std::endl;
		return;}
	if (this->_energyPoints == 0){
		std::cerr <<YELLOW << "🔋ClapTrap " <<_name << " has no more energy left and can't do anything!❌" <<RESET<< std::endl;
		return ;}
	if ((int)amount >= this->_hitPoints) {
        std::cerr << RED<< "💀ClapTrap " << _name << " takes " << amount << " damage and is defeated!" <<RESET<< std::endl;
        this->_hitPoints = 0;
    } else {
        this->_hitPoints -= amount;
        std::cerr << BOLD << RED<< "ClapTrap " << _name << " takes " << amount << " damage! Remaining hit points : " << this->_hitPoints <<RESET<< std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount){
	if ((int)amount < 0){
		std::cout << RED << "Invalid amount!" << RESET <<std::endl;
		return;}
	if (this->_hitPoints == 0){
		  std::cerr << RED << "💀ClapTrap " << _name << " has no hit points left and can't do anything!"<< RESET << std::endl;
		return ;}
	if (this->_energyPoints == 0){
		std::cerr << GREEN<< "🔋ClapTrap " <<_name << " has no energy left to be repaired!❌🛠️" <<RESET<< std::endl;
		return ;}
	this->_hitPoints += amount;
	std::cout << GREEN<< "🛠️ ClapTrap " <<_name << " restored " << amount <<" Remaining  hit points : " << this->_hitPoints << RESET << std::endl;
	this->_energyPoints--;
std::cout  <<YELLOW << "🔋Energy points left : " << _energyPoints << std::endl<< std::endl;

}

void ClapTrap::info(){
std::cout  <<YELLOW << "🔋 Energy points left : " << _energyPoints << std::endl;
std::cout  <<YELLOW << "❤️  Hit points left : " << _hitPoints << std::endl;
std::cout  <<YELLOW << "⚔️  Attack damage : " << _attackDamage << RESET << std::endl;

}
