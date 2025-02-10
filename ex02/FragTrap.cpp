/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:50:03 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/03 09:56:41 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./FragTrap.hpp"

FragTrap::FragTrap(string name)
{
	cout << "Constructor (FragTrap)" << endl;
	this->name = name;
	this->attack_p = 30;
	this->energy_p = 100;
	this->hit_p = 100;
}

FragTrap::~FragTrap(void)
{
	cout << "Destructor (FragTrap)" << endl;
}

FragTrap::FragTrap(void)
{
	this->name = "name";
	this->attack_p = 30;
	this->energy_p = 100;
	this->hit_p = 100;
	cout << "Default constructor (FragTrap)" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	cout << "Copy assignment operator called (FragTrap)" << endl;
	this->name = f.name;
	this->hit_p = f.hit_p;
	this->energy_p = f.energy_p;
	this->attack_p = f.attack_p;

	return *this;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	cout << "Copy constructor called (FragTrap)" << endl;
	*this = obj;
}

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap high fives" << endl;
}
