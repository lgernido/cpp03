/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:33 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/19 10:45:31 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/*CONSTRUCTORS & DESTRUCTORS*/

//Default constructor
ClapTrap::ClapTrap()
{
    std::cout << BOLD << "ClapTrap " << RESET << ITALIC << "default constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Default destuctor
ClapTrap::~ClapTrap()
{
    std::cout << BOLD << "ClapTrap " << RESET << ITALIC << "destructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap(const ClapTrap& aClapTrap)
{
    this->name = aClapTrap.getName();
    this->hit_points = aClapTrap.getHitPoints();
    this->energy_points = aClapTrap.getEnergyPoints();
    this->attack_damage = aClapTrap.getAttackDamage();
    std::cout << BOLD << "ClapTrap " << RESET << ITALIC << "copy constructor " << RESET << "called" << std::endl;
    std::cout << std::endl;
}

//Name constuctor
ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << BOLD << "ClapTrap " << RESET << ITALIC << "name constructor" << RESET << " called" << std::endl;
    std::cout << std::endl;
}

/*OPERATOR OVERLOAD*/

ClapTrap& ClapTrap::operator=(const ClapTrap& aClapTrap)
{
    if (this == &aClapTrap)
        return *this; 
    
    this->name = aClapTrap.getName();
    this->hit_points = aClapTrap.getHitPoints();
    this->energy_points = aClapTrap.getEnergyPoints();
    this->attack_damage = aClapTrap.getAttackDamage(); 
    
    return *this;
}

/*PUBLIC METHODS*/

void ClapTrap::attack(const std::string& target)
{
    if (this->hit_points <= 0)
    {
        std::cout << ORANGE << "Clap Trap " << BOLD << ORANGE << this->getName() << \
         RESET << ORANGE << " has " << BOLD << ORANGE << this->getHitPoints() \
        << RESET << ORANGE << " hit points, he can't attack" << RESET << std::endl;
        std::cout << std::endl;

        return;
    }
    else if (this->energy_points <= 0)
    {
        std::cout << BOLD << RED << "No energy points left for " << \
        RESET << RED << "Clap Trap " << BOLD << this->getName() << RESET << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << BLUE << "Clap Trap " << BLUE << BOLD << this->getName() << \
        RESET << BLUE << " attacks " << BLUE << UNDERLINE << target << RESET << \
        BLUE << ", causing " << BLUE << UNDERLINE << this->getAttackDamage() << RESET \
        << BLUE << " points of damage !" << RESET << std::endl;
        std::cout << std::endl;
        this->loseEnergy();
        this->loseHit(1); 
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED << "Clap Trap " << RED << BOLD << this->getName() << \
    RESET << RED << " suffered " << RED << BOLD << amount << RESET << \
    RED << " points of damage!" << std::endl;
    std::cout << std::endl;
    this->loseHit(amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0)
    {
        std::cout << BOLD << RED << "No energy points left for " << \
        RESET << RED << "Clap Trap " << BOLD << this->getName() << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << GREEN << "Clap Trap " << GREEN << BOLD << this->getName() << \
        RESET << GREEN << " repairs itself with " << GREEN << BOLD << amount << \
        RESET << GREEN << " hit points!" << RESET << std::endl;
        std::cout << std::endl;
        this->winHit(amount);
        this->loseEnergy();
    }
}

void ClapTrap::loseEnergy(void)
{
    this->energy_points--;
}

void ClapTrap::loseHit(unsigned int amount)
{
    this->hit_points -= amount;
}

void ClapTrap::winHit(unsigned int amount)
{
    this->hit_points+=amount;
}

void ClapTrap::displayState(void)
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

/*SETTER AND GETTERS*/

//Getters
std::string ClapTrap::getName(void)const
{
    return (this->name);
}

int ClapTrap::getHitPoints(void)const
{
    return (this->hit_points);
}

int ClapTrap::getEnergyPoints(void)const
{
    return(this->energy_points);
}

int ClapTrap::getAttackDamage(void)const
{
    return (this->attack_damage);
}

//Setters

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    this->attack_damage = amount;
}