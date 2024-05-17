/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:31:32 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/17 16:06:48 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public :
        ~DiamondTrap();
        DiamondTrap(std::string name);

        DiamondTrap(const DiamondTrap& aDiamondTrap);

        DiamondTrap& operator=(const DiamondTrap& aDiamondTrap);

        void whoAmI(void);
        void displayState(void);
        
    protected : 
    
    private :
        DiamondTrap();
        std::string name;
        std::string getName(void)const;
        
};

#endif