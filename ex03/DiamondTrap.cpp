/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:31:11 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/20 09:26:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << BOLD << "Diamond Trap " << RESET << ITALIC << "Default constructor" << RESET << " called" << std::endl;    
    std::cout << std::endl;
}

//Default Destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD << "Diamond Trap " << RESET << ITALIC << "Destructor" << RESET << " called" << std::endl;    
    std::cout << std::endl;
}

//Name Constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << BOLD << "Diamond Trap " << RESET << ITALIC << "name constuctor" << RESET \
    << " called" << std::endl;
    std::cout << std::endl;
}

//Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap& aDiamondTrap) : ClapTrap(aDiamondTrap.getName() + "_clap_name")
{
    this->name = aDiamondTrap.getName();
    this->hit_points = aDiamondTrap.getHitPoints();
    this->energy_points = aDiamondTrap.getEnergyPoints();
    this->attack_damage = aDiamondTrap.getAttackDamage();
    std::cout << BOLD << "Diamond Trap " << RESET << ITALIC << "copy constuctor" << RESET \
    << " called" << std::endl;
    std::cout << std::endl;
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
    std::cout << "My ClapTrap name: " << BOLD << ClapTrap::getName() << RESET << std::endl;
    std::cout << std::endl;
}

/*PRIVATE METHODS*/

std::string DiamondTrap::getName(void)const
{
    return this->name;
}

void DiamondTrap::displayState(void)
{
    std::cout << BOLD << "[CHARACTER STATE]"  << RESET << std ::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Name: " << this->getName() << std::endl;
    std::cout << "Hit points: " << this->getHitPoints() << std::endl;
    std::cout << "Energy points: " << this->getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << this->getAttackDamage() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << std::endl;
}