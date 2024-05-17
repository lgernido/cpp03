/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/17 15:03:55 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
        /* Testing basic initialization test ClapTrap VS ScavTrap VS FragTrap*/

        // ClapTrap Kobe("Kobe");
        // ScavTrap Lebron("Lebron");
        // FragTrap Magic ("Magic");

        // Kobe.displayState();
        // Lebron.displayState();
        // Magic.displayState();
    }
    {
        /*Testing attack function ScavTrap VS FargTrap*/

        // ScavTrap Lebron("Lebron");
        // FragTrap Magic ("Magic");

        // Lebron.attack("Steph");
        // Magic.attack("Larry");

        // Lebron.displayState();
        // Magic.displayState();
    }
    {
        /*Testing FargTrap' high five function*/

        // FragTrap Magic("Magic");

        // Magic.highFivesGuys();
        // Magic.displayState();
    }
    {
        /*Testing multiple things all at once*/

        ClapTrap Kobe("Kobe");
        ScavTrap Lebron("Lebron");
        FragTrap Magic ("Magic");

        Kobe.attack("Shaq");
        Lebron.takeDamage(30);
        Lebron.beRepaired(10);
        Magic.attack("Larry");
        Magic.takeDamage(100);
        Magic.attack("Larry");
        Magic.beRepaired(40);
        Lebron.guardGate();
        Kobe.beRepaired(2);
        Magic.highFivesGuys();

        Kobe.displayState();
        Lebron.displayState();
        Magic.displayState();
    }
}