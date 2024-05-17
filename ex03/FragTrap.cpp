/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:02:01 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/17 16:08:27 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*CONSTRUCTORS & DESTRUCTORS*/

//Default Constructor
FragTrap::FragTrap() : ClapTrap()
{
    this->hit_points = 100;
    this->attack_damage = 30;
    std::cout << BOLD << "FragTrap " << RESET << ITALIC << "Default constructor" << RESET << " called" << std::endl; 
    std::cout << std::endl;
}

//Default Destructor
FragTrap::~FragTrap()
{
    std::cout << BOLD << "FragTrap " << RESET << ITALIC << "destructor" << RESET << " called" << std::endl;  
    std::cout << std::endl;
}

//Copy Constructor
FragTrap::FragTrap(const FragTrap& aFragTrap)
{
    this->name = aFragTrap.getName();
    this->hit_points = aFragTrap.getHitPoints();
    this->energy_points = aFragTrap.getEnergyPoints();
    this->attack_damage = aFragTrap.getAttackDamage();
    std::cout << BOLD << "FragTrap " << RESET << ITALIC << "copy constructor" << RESET \
    << " called" << std::endl;
    std::cout << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << BOLD << "FragTrap " << RESET << ITALIC << "name constructor" << RESET \
    << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOAD*/

FragTrap& FragTrap::operator=(const FragTrap& aFragTrap)
{
    if (this == &aFragTrap)
        return *this;
        
    this->name = aFragTrap.getName();
    this->hit_points = aFragTrap.getHitPoints();
    this->energy_points = aFragTrap.getEnergyPoints();
    this->attack_damage = aFragTrap.getAttackDamage();

    return *this;
}

/*PUBLIC METHODS*/

void FragTrap::highFivesGuys(void)
{
    std::cout << BOLD << CYAN << this->getName() << RESET << \
    CYAN << " : High five guys !" << RESET << std::endl;
    std::cout << std::endl;
}