#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(void);
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap(void);

        using   ScavTrap::attack;
        void    whoAmI(void);
        void    printProperties(void);

    private:
        std::string _name;
        //using   ClapTrap::_name;
        using   FragTrap::_hitPoints;
        using   ScavTrap::_energyPoints;
        using   FragTrap::_attackDamage;
};

#endif