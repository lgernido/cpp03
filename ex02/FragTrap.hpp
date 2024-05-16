/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:01:09 by lgernido          #+#    #+#             */
/*   Updated: 2024/05/16 14:27:40 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);

        FragTrap(const FragTrap& aFragTrap);

        FragTrap& operator=(const FragTrap& aFragTrap);

        void highFivesGuys(void);

    private : 
        
};




#endif