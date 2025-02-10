/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:45:15 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 14:40:35 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	protected:
		string			name;
		unsigned int	hit_p; // health points
		unsigned int	energy_p;
		unsigned int	attack_p;

	public:
		ClapTrap(string name);
		~ClapTrap();
		ClapTrap(void);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator =(const ClapTrap &c);
		
		void attack(const string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif