/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:51:57 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/01 17:27:22 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
		public:
			ScavTrap(string name);
			~ScavTrap(void);
			ScavTrap(void);
			ScavTrap(const ScavTrap &obj);
			ScavTrap &operator=(const ScavTrap &s);

			void attack(const string& target);
			void guardGate(void);
};

#endif