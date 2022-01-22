/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:21:06 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/22 17:25:17 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() { return; };

Karen::~Karen() { return; };

void Karen::debug(void) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle special-ketchup burger. I just love it!" << '\n';

}

void Karen::info(void) {

	std::cout << "I cannot believe adding extr bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << '\n';

}

void Karen::warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << '\n';

}

void Karen::error(void) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << '\n';

}

void Karen::complain(std::string level) {

	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*fcnTmp[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++) {
		if (str[i] == level)
			(this->*fcnTmp[i])();
	}
}
