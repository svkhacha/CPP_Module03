#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ob;
	ClapTrap	ob2("Targaryen");
	ClapTrap	ob3("Stark");
	ClapTrap	ob4(ob2);

	ob3 = ob2;

	ob2.printProperties();
	ob2.attack("Stark");
	ob2.setAttackDamage(3);

	for (int i = 0; i < 3; ++i)
	ob2.attack("Stark");
	
	ob2.printProperties();
	ob2.setEnergyPoint(2);
	ob2.takeDamage(11);
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.beRepaired(6);
	ob2.printProperties();
	ob2.attack("Stark");
	ob2.beRepaired(1);
}
