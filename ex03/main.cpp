/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/19 13:16:38 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    {
        /*Testing basic initialization VS other classes*/

        // ClapTrap Kobe("Kobe");
        // ScavTrap Lebron("Lebron");
        // FragTrap Magic ("Magic");
        // DiamondTrap Kyrie("Kyrie");

        // Kobe.displayState();
        // Lebron.displayState();
        // Magic.displayState();
        // Kyrie.displayState();
    }
    {
        /*Testing both names of Diamond Trap*/

        // DiamondTrap Kyrie("Kyrie");
        // Kyrie.whoAmI();
        // Kyrie.displayState();
    }
    {
        /*Testing the copy of Diamond Trap*/
        
        // DiamondTrap Kyrie("Kyrie");
        // DiamondTrap Luka(Kyrie);
        
        // Kyrie.displayState();
        // Luka.displayState();
        
        // Luka.whoAmI();
    }
    {
        /*Testing multiple things all at once*/

        // ClapTrap Kobe("Kobe");
        // ScavTrap Lebron("Lebron");
        // FragTrap Magic("Magic");
        // DiamondTrap Kyrie("Kyrie");

        // Kobe.attack("Shaq");
        // Lebron.attack("Steph");
        // Magic.attack("Larry");
        // Kyrie.attack("Luka");

        // Kobe.beRepaired(10);
        // Lebron.beRepaired(15);
        // Magic.beRepaired(20);
        // Kyrie.beRepaired(30);

        // Kobe.takeDamage(10);
        // Lebron.takeDamage(5);
        // Magic.takeDamage(33);
        // Kyrie.takeDamage(2);

        // Lebron.guardGate();
        // Magic.highFivesGuys();
        // Kyrie.whoAmI();

        // Kobe.displayState();
        // Lebron.displayState();
        // Magic.displayState();
        // Kyrie.displayState();        
    }
}