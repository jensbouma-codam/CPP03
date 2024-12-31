/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:54 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 19:32:06 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	
	std::cout << "ScavTrap " << _name << " Default contructed and initialized" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	
	std::cout << "ScavTrap " << _name << " Contructed and initialized" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructed" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitpoints = rhs._hitpoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (target == _name)
	{
		std::cout << "ScavTrap " << _name << " attacks itself" << std::endl;
		return ;
	}

	if (_hitpoints == 0) 
	{ 
		std::cout << "ScavTrap " << _name << " is dead and cannot attack" << std::endl; 
		return ; 
	}
	if (_energyPoints == 0) 
	{ 
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack" << std::endl; 
		return ;
	}

	_energyPoints -= 1;

	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;	
	
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}
