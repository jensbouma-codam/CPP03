/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:57 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 15:35:12 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	claptrap.takeDamage(10);		// Prints "ClapTrap Unit 01 takes 10 points of damage!"
	claptrap2.attack("Unit 01");
	claptrap.beRepaired(5);
}