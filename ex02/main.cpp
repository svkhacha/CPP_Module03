#include "FragTrap.hpp"

int	main()
{
	FragTrap	ob;
	FragTrap	ob2("Targaryen");
	FragTrap	ob3("Stark");
	FragTrap	ob4(ob2);

	ob3 = ob2;

	ob3.highFivesGuys();
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.setAttackDamage(35);

	for (int i = 0; i < 3; ++i)
	ob2.attack("Stark");
	
	ob2.printProperties();
	ob2.setEnergyPoint(2);
	ob2.takeDamage(102);
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.beRepaired(6);
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.beRepaired(1);
}
