/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:50 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 17:12:18 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>
#include <vector>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
		int			_hitpoints = FragTrap::_hitpoints;
		int			_energyPoints = ScavTrap::_energyPoints;
		int			_attackDamage = FragTrap::_attackDamage;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap & operator=( DiamondTrap const & rhs ); 

		void attack(const std::string &target);

	void whoAmI();
};

// Override for ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
