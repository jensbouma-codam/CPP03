/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:54 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 20:00:40 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap default Constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap " << _name << " Constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " Destructed" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitpoints = rhs._hitpoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (target == _name)
	{
		std::cout << "ClapTrap " << _name << " attacks itself" << std::endl;
		return ;
	}

	if (_hitpoints == 0) 
	{ 
		std::cout << "ClapTrap " << _name << " is dead and cannot attack" << std::endl; 
		return ; 
	}
	if (_energyPoints == 0) 
	{ 
		std::cout << "ClapTrap " << _name << " is out of energy and cannot attack" << std::endl; 
		return ;
	}

	_energyPoints -= 1;

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;	
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	if (_hitpoints == 0) 
	{ 
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl; 
		return ; 
	}
	
	_hitpoints -= amount;
	
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	
	if (_hitpoints <= 0)
	{
		_hitpoints = 0;
		std::cout << "ClapTrap " << _name << " has died" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints == 0) 
	{ 
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired" << std::endl; 
		return ; 
	}

	if (_energyPoints == 0) 
	{ 
		std::cout << "ClapTrap " << _name << " is out of energy and cannot be repaired" << std::endl; 
		return ;
	}
	
	_hitpoints += amount;
	_energyPoints -= 1;
	
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}
