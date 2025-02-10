/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:45:03 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 18:04:30 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : hit_p(10), energy_p(10), attack_p(0)
{
	cout << "Constructor (ClapTrap)" << endl;
	this->name = name;
}

ClapTrap::~ClapTrap(void)
{
	cout << "Destructor (ClapTrap)" << endl;
}

ClapTrap::ClapTrap(void) : name("name"), hit_p(10), energy_p(10), attack_p(0)
{
	cout << "Default constructor (ClapTrap)" << endl;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &c)
{
	cout << "Copy assignment operator called (ClapTrap)" << endl;
	if (this != &c)
	{
		this->name = c.name;
		this->attack_p = c.attack_p;
		this->hit_p = c.hit_p;
		this->energy_p = c.energy_p;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	cout << "Copy constructor called (ClapTrap)" << endl;
	*this = obj;
}

void    ClapTrap::attack(const string& target)
{
	if (!energy_p || !hit_p)
	{
		cout << "insufficient energy points or hit" << endl;
		return ;
	}
	cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attack_p << " points of damage!" << endl;
	this->energy_p--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!hit_p)
	{
		cout << "insufficient health points" << endl;
		return ;
	}
	if(amount >= hit_p)
		hit_p = 0;
	else
		hit_p -= amount;
	cout << "ClapTrap " << this->name << " lost " << amount << " points of damage" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!energy_p || !hit_p)
	{
		cout << "insufficient energy points or hit" << endl;
		return ;
	}
	this->hit_p += amount;
	this->energy_p -= 1;
	cout << "ClapTrap " << this->name << " gained "  << amount << " points of damage" << endl;
}
