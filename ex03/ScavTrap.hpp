/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:51:57 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 20:27:20 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
		protected:
			// std::string name;
			unsigned int energy_p;
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