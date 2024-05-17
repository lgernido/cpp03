/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:23:09 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/17 13:15:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"
#define RESET      "\033[0m"


class ClapTrap
{
  public :
    ~ClapTrap();
    ClapTrap(std::string name);
    
    ClapTrap(const ClapTrap& aClapTrap);

    ClapTrap& operator=(const ClapTrap& aClapTrap);

    std::string getName(void)const;
    int getHitPoints(void)const;
    int getEnergyPoints(void)const;
    int getAttackDamage(void)const;

    void setName(std::string name);
    void setAttackDamage(unsigned int amount);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void loseEnergy(void);
    void loseHit(unsigned int amount);
    void winHit(unsigned int amount);
    void displayState(void);

  private :
    ClapTrap();
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
      
};


#endif