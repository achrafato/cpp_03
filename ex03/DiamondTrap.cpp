/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:55:27 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/03 09:54:30 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hit_p = FragTrap::hit_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
	cout << "30 : " << this->attack_p << " 50: " << this->energy_p << " 100: " << hit_p << endl;

	cout << "constructor (DiamondTrap)" << endl;
}

DiamondTrap::DiamondTrap(void):ClapTrap("df_clap_name"), FragTrap(), ScavTrap()
{
	cout << "default constructor (DiamondTrap)" << endl;
	this->name = "name_d";
	this->hit_p = FragTrap::hit_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "Destructor (DiamondTrap)" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
	cout << "Copy assignment operator called (DiamondTrap)" << endl;
	ClapTrap::name = d.name + "_clap_name"; // to reflect update
	this->name = d.name;
	this->hit_p = d.hit_p;
	this->energy_p = d.energy_p;
	this->attack_p = d.attack_p;

	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	cout << "Copy constructor called (DiamondTrap)" << endl;
	*this = obj;
}

void DiamondTrap::attack(string name)
{
	ScavTrap::attack(name);
}

void DiamondTrap::whoAmI()
{
	cout << "DiamondTrap " << this->name << " ClapTrap name " << ClapTrap::name << endl;
}
