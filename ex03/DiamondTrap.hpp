/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:55:35 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 19:41:14 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	// private:
	// 	string name;
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &d);

		void attack(string name);
		void whoAmI();
};