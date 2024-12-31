/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:57 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 16:10:03 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	
	ClapTrap claptrap("Unit 01");	// Creates a ClapTrap object with the name "Unit 01"
	ClapTrap claptrap2("Unit 02");	// Creates a ClapTrap object with the name "Unit 02"
	claptrap.attack("Unit 02");		// Prints "ClapTrap Unit 01 attacks Unit 02, causing 0 points of damage!"
	claptrap2.attack("Unit 01");		// Prints "ClapTrap Unit 04 not found"
	claptrap.attack("Unit 01");		// Prints "ClapTrap Unit 01 attacks itself"

	claptrap.beRepaired(10);		// Prints "ClapTrap Unit 01 is repaired for 10 points"
	for (size_t i = 0; i < 10; i++)	// Prints "....ClapTrap Unit 01 is out of energy and cannot attack"
	{
			claptrap.attack("Unit 02");
	}
	
	claptrap2.attack("Unit 01");
	claptrap.beRepaired(5);

	ScavTrap scavtrap("Unit 03");	// Creates a ScavTrap object with the name "Unit 03"
	ScavTrap scavtrap2("Unit 04");	// Creates a ScavTrap object with the name "Unit 04"
	scavtrap.attack("Unit 04");		// Prints "ScavTrap Unit 03 attacks Unit 04, causing 20 points of damage!"
	scavtrap2.attack("Unit 03");	// Prints "ScavTrap Unit 04 attacks Unit 03, causing 20 points of damage!"
	scavtrap.attack("Unit 03");		// Prints "ScavTrap Unit 03 attacks itself"

	scavtrap.guardGate();			// Prints "ScavTrap Unit 03 has entered in Gate keeper mode"
}