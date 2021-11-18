/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:33:42 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 05:00:32 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#define HIT 10
#define ENERGY 10
#define DMG 0

class ClapTrap
{

	protected:

		std::string 	_name;
		unsigned int	_hit;
		unsigned int	_maxhit;
		unsigned int	_energy;
		unsigned int	_dmg;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap	&operator=(ClapTrap const &ass);
		~ClapTrap(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
