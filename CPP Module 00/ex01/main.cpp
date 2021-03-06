/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:10:13 by hfunctio          #+#    #+#             */
/*   Updated: 2021/12/01 15:46:38 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	PhoneBook PhoneBook;

	while (1)
	{
		std::cout << "\e[0;37mEnter command: ";
		std::getline(std::cin, command);
		std::cout << '\n';
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			PhoneBook.addContact();
		else if (command == "SEARCH")
			PhoneBook.searchContact();
		else
			std::cout << "\e[0;31mError. Forbidden input." << std::endl << "Please enter: ADD, SEARCH, EXIT." << std::endl << '\n';
	}
	return 0;
}
