/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:31:32 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 16:14:44 by lgernido         ###   ########.fr       */
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
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);

        DiamondTrap(const DiamondTrap& aDiamondTrap);

        DiamondTrap& operator=(const DiamondTrap& aDiamondTrap);

        using ScavTrap::attack;
        void whoAmI(void);
        
    protected : 
    
    private :
        std::string name;
        
};

#endif