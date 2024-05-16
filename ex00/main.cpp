/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:35 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 11:45:00 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    {
        ClapTrap Kobe("Kobe");
        ClapTrap Lebron("Lebron");

        Kobe.attack("Lebron");
        Kobe.beRepaired(1);
        Lebron.takeDamage(8);
        Lebron.beRepaired(1);
        Lebron.attack("Kobe");
        Lebron.takeDamage(2);
        Lebron.attack("Kobe");
        Kobe.displayState();
        Lebron.displayState();
    }
}