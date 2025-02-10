/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:52:18 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/02 20:23:59 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

int main(void)
{
    DiamondTrap d("   My-name  ");
    DiamondTrap c(d);

    cout << "************************************\n\n";

    c.attack("target_1");
    c.whoAmI();
    cout << "************************************\n\n";
}
