/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:54 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 20:24:33 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{	
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Destructed" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitpoints = rhs._hitpoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}


void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << _name << " is also ClapTrap " << ClapTrap::_name << std::endl;
}