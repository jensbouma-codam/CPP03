/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:54 by jbouma        #+#    #+#                 */
/*   Updated: 2025/01/01 13:41:48 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{	
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << _name << " Constructed" << std::endl;
	std::cout << "Hitpoints: " << _hitpoints << std::endl;
	std::cout << "EnergyPoints: " << _energyPoints << std::endl;
	std::cout << "AttackDamage: " << _attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " Destructed" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), FragTrap(src), ScavTrap(src)
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