#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Ken("Ken", 100, 10, 30);
	ClapTrap Ryu("Ryu", 120, 10, 25);

	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAttackDamage());
	Ken.beRepaired(25);
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	Ryu.beRepaired(Ryu.getAttackDamage()/3);
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	
	return 0;
}