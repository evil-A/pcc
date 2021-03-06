/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:35:35 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/18 05:08:55 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap 		verde("Verde");
	ScavTrap		rojo("Rojo");
	ScavTrap 		rosa(rojo);

	rosa = ScavTrap("Rosa");

	verde.attack("Rojo");
	rojo.attack("Verde");
	rosa.attack("Rojo");

	verde.takeDamage(2);
	rojo.takeDamage(111);
	verde.beRepaired(2);
	verde.beRepaired(2);
	rojo.beRepaired(111);

	rosa.guardGate();
	return (0);
}
