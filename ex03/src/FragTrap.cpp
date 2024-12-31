/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fragtrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:54 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 19:32:26 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << "FragTrap " << _name << " Default Contructed and initialized" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << "FragTrap " << _name << " Contructed and initialized" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructed" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitpoints = rhs._hitpoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high five :)" << std::endl;
}