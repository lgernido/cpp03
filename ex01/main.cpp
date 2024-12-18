/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 09:13:28 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
        /*Testing basic initialization of ScavTrap VS ClapTrap*/
        
        // ClapTrap Kobe("Kobe");
        // ScavTrap Lebron("Lebron");

        // Kobe.displayState();
        // Lebron.displayState();
    }
    {
        /*Testing the difference in attack messages*/

        // ClapTrap Kobe("Kobe");
        // ScavTrap Lebron("Lebron");

        // Kobe.attack("Magic");
        // Lebron.attack("Steph");

        // Kobe.displayState();
        // Lebron.displayState();
    }
    {
        /*Testing guard gate function*/

        // ScavTrap Lebron("Lebron");
        // Lebron.guardGate();
        // Lebron.displayState();
    }
    {
        /*Testing copy constructor with setting new name and attack damage */

        // ScavTrap Lebron("Lebron");
        // ScavTrap Bronny(Lebron);

        // Bronny.setName("Bronny");
        // Bronny.setAttackDamage(1);

        // Lebron.displayState();
        // Bronny.displayState();
    }
    {
        /*Testing multiple things all at once*/

        ScavTrap Lebron("Lebron");

        Lebron.displayState();
        Lebron.attack("Steph");
        Lebron.guardGate();
        Lebron.beRepaired(10);
        Lebron.takeDamage(100);
        Lebron.beRepaired(50);
        Lebron.displayState();

        ScavTrap Kyrie(Lebron);
        Kyrie.displayState();
    }
}