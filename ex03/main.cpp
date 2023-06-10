#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	ob;
	DiamondTrap	ob2("Targaryen");
	DiamondTrap	ob3("Stark");
	DiamondTrap	ob4(ob2);

	ob3 = ob2;

	ob2.whoAmI();
	ob2.highFivesGuys();
	ob2.guardGate();
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
