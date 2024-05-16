/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 14:25:41 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
        FragTrap Kobe("Kobe");
        FragTrap Lebron("Lebron");

        Kobe.attack("Lebron");
        Kobe.beRepaired(10);
        Lebron.takeDamage(80);
        Lebron.beRepaired(10);
        Kobe.highFivesGuys();
        Lebron.attack("Kobe");
        Lebron.takeDamage(20);
        Lebron.attack("Kobe");
        Kobe.displayState();
        Lebron.displayState();
    }
}