/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 13:57:39 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
        ScavTrap Kobe("Kobe");
        ScavTrap Lebron("Lebron");

        Kobe.attack("Lebron");
        Kobe.beRepaired(10);
        Lebron.takeDamage(80);
        Lebron.beRepaired(10);
        Lebron.attack("Kobe");
        Lebron.takeDamage(20);
        Kobe.guardGate();
        Lebron.attack("Kobe");
        Kobe.displayState();
        Lebron.displayState();
    }
}