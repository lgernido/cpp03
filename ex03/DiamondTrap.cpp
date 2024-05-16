/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:31:11 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 16:19:25 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << BOLD << "Diamond Trap " << RESET << UNDERLINE << "Default constructor" << RESET << " called" << std::endl;    
}

//Default Destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD << "Diamond Trap " << RESET << UNDERLINE << "Destructor" << RESET << " called" << std::endl;    
    
}

//Other Constructor
DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name + "_clap_name";
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << BOLD << "Diamond Trap " << RESET << UNDERLINE << "name constuctor" << RESET \
    << " called" << std::endl;
}

//Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap& aDiamondTrap)
{
    this->name = aDiamondTrap.getName();
    this->hit_points = aDiamondTrap.getHitPoints();
    this->energy_points = aDiamondTrap.getEnergyPoints();
    this->attack_damage = aDiamondTrap.getAttackDamage();
    std::cout << BOLD << "Diamond Trap " << RESET << UNDERLINE << "name constuctor" << RESET \
    << " called" << std::endl;
}

/*OPERATOR OVERLOAD*/

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& aDiamondTrap)
{
    if (this == &aDiamondTrap)
        return *this;
        
    this->name = aDiamondTrap.getName();
    this->hit_points = aDiamondTrap.getHitPoints();
    this->energy_points = aDiamondTrap.getEnergyPoints();
    this->attack_damage = aDiamondTrap.getAttackDamage();

    return *this;
}

/*PUBLIC METHODS*/

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name: " << BOLD << this->getName() << RESET << std::endl;
    //std::cout << "My ClapTrap name" << BOLD << this->
}