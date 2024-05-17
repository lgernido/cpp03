/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:47:43 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/17 16:07:52 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

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

class ScavTrap : public virtual ClapTrap
{
    public :
        ~ScavTrap();
        ScavTrap(std::string name);

        ScavTrap(const ScavTrap& aScavTrap);
        
        ScavTrap& operator=(const ScavTrap& aScavTrap);

        void attack(const std::string& target);
        void guardGate();

    protected :
        ScavTrap();
            
    private : 
        
};

#endif