/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 09:06:42 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    {
        /*Testting the basic initialization of ClapTrap*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
    }
    {
        /*Testing the copy constructor*/
        
        // ClapTrap Kobe("Kobe");
        // ClapTrap Devin(Kobe);        
        // Kobe.displayState();
        // Devin.displayState();
    }
    {
        /* Testing the attack function*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
        // Kobe.attack("Lebron");
        // Kobe.displayState();
    }
    {
        /*Testing the attack function until ClapTrap has no hit points*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
        // Kobe.attack("Lebron");
        // Kobe.attack("Michael");
        // Kobe.attack("Carmelo");
        // Kobe.attack("Tracy");
        // Kobe.attack("Allen");
        // Kobe.attack("Kevin");
        // Kobe.attack("Devin");
        // Kobe.attack("James");
        // Kobe.attack("Rajon");
        // Kobe.attack("Kyrie");
        // Kobe.attack("Joel");
        // Kobe.displayState();
    }
    {
        /*Testing the repair function*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
        // Kobe.attack("Lebron");
        // Kobe.attack("Michael");
        // Kobe.beRepaired(2);
        // Kobe.displayState(); 
    }
        /*Testing the repair function until no energy points are left*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
        // Kobe.takeDamage(5);
        // Kobe.takeDamage(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.beRepaired(5);
        // Kobe.attack("Lebron");
        // Kobe.displayState();
    {
        /*Testing the take damage function*/
        
        // ClapTrap Kobe("Kobe");
        // Kobe.displayState();
        // Kobe.takeDamage(5);
        // Kobe.takeDamage(5);
        // Kobe.displayState();
    }
    {
        /*Testing copy constructor, setting new names and new attack damages*/

        // ClapTrap Kobe("Kobe");
        // ClapTrap Shaq(Kobe);

        // Shaq.setName("Shaq");
        // Kobe.setAttackDamage(5);

        // Kobe.displayState();
        // Shaq.displayState();
    }
    {
        /*Testing multiple things all at once*/

        ClapTrap Kobe("Kobe");
        ClapTrap Lebron("Lebron");
        Kobe.displayState();
        Lebron.displayState();
        
        Kobe.attack("Allen");
        Lebron.attack("Steph");
        Kobe.takeDamage(2);
        Lebron.beRepaired(5);
        Kobe.attack("Shaq");
        
        Kobe.displayState();
        Lebron.displayState();
    }
}