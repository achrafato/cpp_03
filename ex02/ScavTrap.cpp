/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:52:04 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/03 09:57:08 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name)
{
	cout << "Constructor (ScavTrap)" << endl;
	this->name = name;
	this->attack_p = 20;
	this->energy_p = 50;
	this->hit_p = 100;
}

ScavTrap::~ScavTrap(void)
{
	cout << "Destructor (ScavTrap)" << endl;
}

ScavTrap::ScavTrap(void)
{
	this->name = "name";
	this->attack_p = 20;
	this->energy_p = 50;
	this->hit_p = 100;
	cout << "Default constructor (ScavTrap)" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	cout << "Copy assignment operator called (ScavTrap)" << endl;
	this->name = s.name;
	this->hit_p = s.hit_p;
	this->energy_p = s.energy_p;
	this->attack_p = s.attack_p;

	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	cout << "Copy constructor called (ScavTrap)" << endl;
	*this = obj;
}

void	ScavTrap::attack(const string& target)
{
	if (!energy_p || !hit_p)
	{
		cout << "insufficient energy points (ScavTrap) or hit" << endl;
		return ;
	}
	cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << attack_p << " points of damage!" << endl;
	this->energy_p--;
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap" << this->name << "now in Gate keeper mode" << endl;
}
