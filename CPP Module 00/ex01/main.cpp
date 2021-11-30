/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:10:13 by hfunctio          #+#    #+#             */
/*   Updated: 2021/11/22 20:31:48 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string command;

	while (1)
	{
		std::cout << "\e[0;37mEnter command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else
			std::cout << "\e[0;31mError. Wrong input." << std::endl << "Enter: ADD, SEARCH, EXIT." << std::endl;
	}
	return 0;
}
