/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:50 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 20:09:11 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <vector>

class ScavTrap : virtual public ClapTrap
{
	protected:
		std::string _name = ClapTrap::_name;
		int _hitpoints = ClapTrap::_hitpoints;
		int _energyPoints = ClapTrap::_energyPoints;
		int _attackDamage = ClapTrap::_attackDamage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src );
		~ScavTrap();

		ScavTrap & operator=( ScavTrap const & rhs );

		void attack(const std::string &target);
		void guardGate();
};
