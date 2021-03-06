/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 06:53:22 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/12 02:17:55 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen (void)
{

}

Karen::~Karen (void)
{

}

void	Karen::complain (std::string level)
{
	size_t	i;
	std::string	function[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*comment[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (i = 0; i < 4; i++)
		if (function[i].compare(level) == 0)
			(this->*comment[i])();
}

void	Karen::debug (void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info (void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error (void)
{
	std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
}
