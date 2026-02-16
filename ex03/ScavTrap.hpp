#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap//virtual: allow derived class override
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        
        void    attack(const std::string& target);
        void    guardGate();
};

#endif