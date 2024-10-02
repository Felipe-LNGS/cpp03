#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public :
		ScavTrap();
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string const &name);
		ScavTrap & operator=(const ScavTrap &scaved);
		~ScavTrap();
		void attack(const std::string &target);
       	void guardGate();
};

// Avec l’héritage public, les membres publics et protégés de la classe de base restent respectivement publics et protégés dans la classe dérivée.
// Avec l’héritage protégé, les membres publics et protégés deviennent protégés dans la classe dérivée.
// Avec l’héritage privé, tous les membres (publics et protégés) deviennent privés dans la classe dérivée.
