#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("default_clap_name"), FragTrap("default"), ScavTrap("default"), _name("default")
{
    _hitPoints = 100; 
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap constructor called." << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoints = 100; 
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap constructor called." << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called." << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void   DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name 
                << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::getpoints() {
    std::cout << "hitpoints: " << _hitPoints << std::endl;
    std::cout << "energypoints: " << _energyPoints << std::endl;
    std::cout << "attackpoints: " << _attackDamage << std::endl;
}