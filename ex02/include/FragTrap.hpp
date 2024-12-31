/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:50 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 19:40:18 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <vector>

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string _name = ClapTrap::_name;
		int _hitpoints = ClapTrap::_hitpoints;
		int _energyPoints = ClapTrap::_energyPoints;
		int _attackDamage = ClapTrap::_attackDamage;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src );
		~FragTrap();

		FragTrap & operator=( FragTrap const & rhs );

		void highFivesGuys(void);
};
