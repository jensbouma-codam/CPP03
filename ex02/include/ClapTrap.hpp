/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbouma <jbouma@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 12:20:50 by jbouma        #+#    #+#                 */
/*   Updated: 2024/12/31 19:31:30 by jensbouma     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap( ClapTrap const & src );
		ClapTrap & operator=( ClapTrap const & rhs );

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
