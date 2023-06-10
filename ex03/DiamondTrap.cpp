#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_name = "Unknown";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
    std::cout<<"Default constructor called for DiamondTrap"<<std::endl;
	std::cout<<GREEN<<_name<<" DiamondTrap created"<<RESET<<std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : 
    ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
    std::cout<<"Constructor with parameter called for DiamondTrap"<<std::endl;
	std::cout<<GREEN<<"DiamondTrap created and named "<<this->_name<<RESET<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
   ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
    std::cout<<"Copy constructor called for DiamondTrap"<<std::endl;
	std::cout<<GREEN<<"DiamondTrap created with same properties as ";
	std::cout<<other._name<<RESET<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout<<"Copy assignment opeartor of DiamondTrap called"<<std::endl;
    if (this != &other)
    {
        this->_name = other._name;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
    }
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout<<RED<<"Destructor called for DiamondTrap and "<<RESET;
	std::cout<<this->_name<<RED<<" destroyed"<<RESET<<std::endl;
}

void    DiamondTrap::printProperties(void)
{
    std::cout<<"**********************"<<std::endl;
	std::cout<<CYAN<<this->_name<<"'s properties"<<RESET<<std::endl;
	std::cout<<"**********************"<<std::endl;
	std::cout<<"🔹Hit Points: "<<YELLOW<<_hitPoints<<RESET<<std::endl;
	std::cout<<"🔹Energy Points: "<<BLUE<<_energyPoints<<RESET<<std::endl;
	std::cout<<"🔹Attack Damage: "<<PINK<<_attackDamage<<RESET<<std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout<<"My name is "<<CYAN<<this->_name<<RESET<<std::endl;
    std::cout<<"My ClapTrap name is "<<CYAN<<ClapTrap::_name<<RESET<<std::endl;
}