#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 100, 0);
	ScavTrap clap2("ScavChad");
	
	std::cout << std::endl << "----- Clap1 test ----- " << std::endl;
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	std::cout << "Clap energy = " << clap1.getEnergyPoints() << std::endl;
	std::cout << "Clap health = " << clap1.getHitPoints() << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");
	clap1.takeDamage(150);
	clap1.attack("Sigma");
	clap1.beRepaired(50);

	std::cout << std::endl << "----- Clap2 test ----- " << std::endl;
	clap2.attack("Sigma");
	clap2.takeDamage(50);
	std::cout << "ScavChad energy = " << clap2.getEnergyPoints() << std::endl;
	std::cout << "ScavChad health = " << clap2.getHitPoints() << std::endl;
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.attack("Sigma");
	clap2.guardGate();
	clap2.takeDamage(150);
	std::cout << "ScavChad died." << std::endl;
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.guardGate();
	std::cout << std::endl;
	
}
