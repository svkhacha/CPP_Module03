#include "ClapTrap.hpp"

// Orthodox Canonical Form functions

ClapTrap::ClapTrap(void)
{
	this->_name = "Unknown";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
	std::cout<<"Default constructor called for ClapTrap"<<std::endl;
	std::cout<<GREEN<<_name<<" ClapTrap created"<<RESET<<std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
	std::cout<<"Constructor with parameter called for ClapTrap"<<std::endl;
	std::cout<<GREEN<<"ClapTrap created and named "<<this->_name<<RESET<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout<<"Copy constructor called for ClapTrap"<<std::endl;
	std::cout<<GREEN<<"ClapTrap created with same properties as ";
	std::cout<<other._name<<RESET<<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout<<"Copy assignment opeartor of ClapTrap called"<<std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<RED<<"Destructor called for ClapTrap and "<<RESET;
	std::cout<<this->_name<<RED<<" destroyed"<<RESET<<std::endl;
}

// Subject required functions

void	ClapTrap::attack(const std::string& target)
{
	std::string	because = "";
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
	std::cout<<YELLOW<<"ClapTrap "<<this->_name<<" attacks "<<target<<", causing ";
	std::cout<<this->_attackDamage<<" points of damage!"<<RESET<<std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
	{
		this->_hitPoints = 0;
		std::cout<<this->_name<<RED<<" was killed "<<RESET;
		std::cout<<"(hit points == "<<this->_hitPoints<<")"<<std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout<<PINK<<this->_name<<" was damaged and lost ";
	std::cout<<amount<<" hit points"<<RESET<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout<<this->_name<<" has no energy and ";
		std::cout<<RED<<"can't get repaired"<<RESET<<std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout<<BLUE<<this->_name<<" repaired and got ";
	std::cout<<amount<<" hit points"<<RESET<<std::endl;
}

// Other useful class member functions

void	ClapTrap::printProperties(void)
{
	std::cout<<"**********************"<<std::endl;
	std::cout<<CYAN<<this->_name<<"'s properties"<<RESET<<std::endl;
	std::cout<<"**********************"<<std::endl;
	std::cout<<"🔹Hit Points: "<<YELLOW<<this->_hitPoints<<RESET<<std::endl;
	std::cout<<"🔹Energy Points: "<<BLUE<<this->_energyPoints<<RESET<<std::endl;
	std::cout<<"🔹Attack Damage: "<<PINK<<this->_attackDamage<<RESET<<std::endl;
}

void	ClapTrap::setHitPoint(unsigned int amount)
{
	this->_hitPoints = amount;
	std::cout<<this->_name<<"'s hit points set to "<<YELLOW<<amount<<RESET<<std::endl;
}

void	ClapTrap::setEnergyPoint(unsigned int amount)
{
	this->_energyPoints = amount;
	std::cout<<this->_name<<"'s energy points set to "<<BLUE<<amount<<RESET<<std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
	std::cout<<this->_name<<"'s attack damage set to "<<PINK<<amount<<RESET<<std::endl;
}



