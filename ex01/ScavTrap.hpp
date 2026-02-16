#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//<derived class>: public <base class>
class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        
        void    attack(const std::string& target);
        void    guardGate();
};

#endif