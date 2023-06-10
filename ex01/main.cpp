#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	ob;
	ScavTrap	ob2("Targaryen");
	ScavTrap	ob3("Stark");
	ScavTrap	ob4(ob2);

	ob3 = ob2;

	ob3.guardGate();
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.setAttackDamage(25);

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
