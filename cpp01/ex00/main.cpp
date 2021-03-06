/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:22:23 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/08 23:43:13 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{	
	Zombie	*undead;


	std::cout << "Stack overflow" << std::endl;
	randomChump("Fausto");
	randomChump("Frank Coconut");
	randomChump("Rockefeller");
	
	std::cout << "Heap of the moment" << std::endl;
	undead = newZombie("Braulio");
	undead->announce();
	delete undead;



	return (0);
}
