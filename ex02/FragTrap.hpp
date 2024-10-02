#pragma once
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap();
		FragTrap(FragTrap const &src);
		FragTrap(const std::string &name);
		FragTrap & operator=(const FragTrap &trap);
		~FragTrap();
		void highFivesGuys(void);
};
