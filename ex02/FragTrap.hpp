/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:50:17 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/01 17:25:46 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FAGTAP_HPP
#define FAGTAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
		public:
			FragTrap(string name);
			~FragTrap(void);
			FragTrap(void);
			FragTrap(const FragTrap &obj);
			FragTrap &operator=(const FragTrap &f);

			void attack(const string& target);
			void highFivesGuys(void);
};

#endif