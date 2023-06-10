#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout<<"Default constructor called for ScavTrap"<<std::endl;
	std::cout<<GREEN<<_name<<" ScavTrap created"<<RESET<<std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout<<"Constructor with parameter called for ScavTrap"<<std::endl;
	std::cout<<GREEN<<"ScavTrap created and named "<<this->_name<<RESET<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout<<"Copy constructor called for ScavTrap"<<std::endl;
	std::cout<<GREEN<<"ScavTrap created with same properties as ";
	std::cout<<other._name<<RESET<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout<<"Copy assignment opeartor of ScavTrap called"<<std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout<<RED<<"Destructor called for ScavTrap and "<<RESET;
	std::cout<<this->_name<<RED<<" destroyed"<<RESET<<std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::string because = "";
    if (this->_hitPoints == 0 && this->_energyPoints != 0)
        because = "has no health";
    else if (this->_hitPoints != 0 && this->_energyPoints == 0)
        because = "has no energy";
    else if (this->_hitPoints == 0 && this->_energyPoints == 0)
        because = "has neither health nor energy";
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout<<this->_name<<RED<<" can't attack"<<RESET", it "<<because<<std::endl;
        return ;
    }
    std::cout<<YELLOW<<"ScavTrap "<<this->_name<<" attacks "<<target<<", causing ";
	std::cout<<this->_attackDamage<<" points of damage!"<<RESET<<std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate(void)
{
    std::cout<<this->_name<<" is now in Gate keeper mode."<<std::endl;
}