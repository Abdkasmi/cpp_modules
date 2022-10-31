#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Ken("Ken", 100, 10, 30);
	ClapTrap Ryu("Ryu", 120, 10, 25);

	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	Ryu.attack("Ken");
	Ken.takeDamage(Ryu.getAttackDamage());
	std::cout << "Ken hitpoints : " << Ken.getHitPoints() << std::endl;
	Ken.beRepaired(25);
	std::cout << "Ken hitpoints : " << Ken.getHitPoints() << std::endl;
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	Ryu.beRepaired(Ryu.getAttackDamage()/3);
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	Ken.attack("Ryu");
	Ryu.takeDamage(Ken.getAttackDamage());
	std::cout << "Ryu hitpoints : " << Ryu.getHitPoints() << std::endl;
	
	return 0;
}