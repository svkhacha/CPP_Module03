#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RED		"\33[1;31m" // for destructor
#define GREEN	"\33[1;32m" // for constructor
#define YELLOW	"\33[1;33m" // for attack and hit points
#define BLUE	"\33[1;34m" // for repair and energy points
#define PINK	"\33[1;35m" // for take damage and attack damage
#define CYAN	"\33[1;36m" //for properties
#define RESET	"\33[0;m"

class ClapTrap
{
	public:
		ClapTrap(void); 							//Default constructor
		ClapTrap(const std::string name); 			//Constructor with parameter
		ClapTrap(const ClapTrap& other); 			// Copy constructor
		ClapTrap& operator=(const ClapTrap& other); // Copy assignment operator
		~ClapTrap(void); 							// Destructor

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setHitPoint(unsigned int hitAmount);
		void	setEnergyPoint(unsigned int energyAmount);
		void	setAttackDamage(unsigned int damageAmount);
		void	printProperties(void);

	protected:
		std::string 	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif