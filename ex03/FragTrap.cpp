#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout<<"Default constructor called for FragTrap"<<std::endl;
	std::cout<<GREEN<<_name<<" FragTrap created"<<RESET<<std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout<<"Constructor with parameter called for FragTrap"<<std::endl;
	std::cout<<GREEN<<"FragTrap created and named "<<this->_name<<RESET<<std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout<<"Copy constructor called for FragTrap"<<std::endl;
	std::cout<<GREEN<<"FragTrap created with same properties as ";
	std::cout<<other._name<<RESET<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout<<"Copy assignment opeartor of FragTrap called"<<std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout<<RED<<"Destructor called for FragTrap and "<<RESET;
	std::cout<<this->_name<<RED<<" destroyed"<<RESET<<std::endl;
}

void    FragTrap::attack(const std::string& target)
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
    std::cout<<YELLOW<<"FargTrap "<<this->_name<<" attacks "<<target<<", causing ";
	std::cout<<this->_attackDamage<<" points of damage!"<<RESET<<std::endl;
    this->_energyPoints--;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout<<this->_name<<" gives everyone high fives."<<std::endl;
}