#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 100, 0);
	ScavTrap clap2("ScavChad");
	FragTrap clap3("FragMcqueen");
	
	std::cout << std::endl << "----- Clap1 test ----- " << std::endl;
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	std::cout << "Clap energy = " << clap1.getEnergyPoints() << std::endl;
	std::cout << "Clap health = " << clap1.getHitPoints() << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");
	clap1.takeDamage(150);
	std::cout << "Clap1 died." << std::endl;
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

	std::cout << std::endl << "----- Clap3 test ----- " << std::endl;
	clap3.attack("Sigma");
	clap3.takeDamage(50);
	std::cout << "FragMcqueen energy = " << clap3.getEnergyPoints() << std::endl;
	std::cout << "FragMcqueen health = " << clap3.getHitPoints() << std::endl;
	clap3.attack("Sigma");
	clap3.beRepaired(50);
	clap3.highFivesGuys();
	clap3.attack("Sigma");
	clap3.takeDamage(150);
	clap3.highFivesGuys();
	std::cout << "FragMcqueen died." << std::endl;
	clap3.highFivesGuys();
	clap3.attack("Sigma");
	clap3.beRepaired(50);
	std::cout << std::endl;
	
}