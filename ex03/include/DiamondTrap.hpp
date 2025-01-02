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

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string	_name;
		int 		_hitpoints;
		int 		_energyPoints;
		int 		_attackDamage;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap & operator=( DiamondTrap const & rhs ); 

		void attack(const std::string &target) { ScavTrap::attack(target); }

		void whoAmI();
};

