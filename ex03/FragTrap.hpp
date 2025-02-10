/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:50:17 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 12:19:27 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FAGTAP_HPP
#define FAGTAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
		protected:
			unsigned int hit_p;
			unsigned int attack_p;
		public:
			FragTrap(void);
			FragTrap(string name);
			~FragTrap(void);
			FragTrap(const FragTrap &obj);
			FragTrap &operator=(const FragTrap &f);

			void attack(const string& target);
			void highFivesGuys(void);
};

#endif