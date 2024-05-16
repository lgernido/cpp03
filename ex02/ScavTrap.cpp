/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:48:17 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 13:58:09 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*CONSTRUCORS & DESTRUCTORS*/

//Default Constructor
ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << BOLD << "ScavTrap " << RESET << UNDERLINE << "Default constructor" << RESET << " called" << std::endl;
    
}

//Default Destructor
ScavTrap::~ScavTrap()
{
    std::cout << BOLD << "ScavTrap " << RESET << UNDERLINE << "Destructor" << RESET << " called" << std::endl;
}

//Other Constructor
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 20;
    std::cout << BOLD << "ScavTrap " << RESET << UNDERLINE << "name constuctor" << RESET \
    << " called" << std::endl;
}

/*PUBLIC METHODS*/

void ScavTrap::attack(const std::string& target)
{
    if (this->hit_points == 0)
    {
        std::cout << ORANGE << "Scav Trap " << BOLD << ORANGE << this->getName() << \
         RESET << ORANGE << " has " << BOLD << ORANGE << this->getHitPoints() \
        << RESET << ORANGE << " hit points, he can't attack" << RESET << std::endl;
        std::cout << std::endl;

        return;
    }
    else if (this->energy_points == 0)
    {
        std::cout << BOLD << RED << "No energy points left for " << \
        RESET << RED << "Scav Trap " << BOLD << this->getName() << std::endl;
    }
    else
    {
        std::cout << BLUE << "Scav Trap " << BLUE << BOLD << this->getName() << \
        RESET << BLUE << " attacks " << BLUE << UNDERLINE << target << RESET << \
        BLUE << ", causing " << BLUE << UNDERLINE << this->getAttackDamage() << RESET \
        << BLUE << " points of damage !" << RESET << std::endl;
        std::cout << std::endl;
        this->loseEnergy();
        this->loseHit(1); 
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << MAGENTA << "Scav Trap " << MAGENTA << BOLD << this->getName() << \
    RESET << MAGENTA << " is now in guard keeper mode" << std::endl;
    std::cout << std::endl;
}