/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:10:13 by hfunctio          #+#    #+#             */
/*   Updated: 2021/11/30 18:25:01 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddressBook.hpp"

int main(void)
{
	std::string command;
	AddressBook addressBook;

	while (1)
	{
		std::cout << "\e[0;37mEnter command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			/* code */
		}
		else if (command == "SEARCH")
		{
			/* code */
		}
		else
			std::cout << "\e[0;31mError. Forbidden input." << std::endl << "Please enter: ADD, SEARCH, EXIT." << std::endl;
	}
	return 0;
}
