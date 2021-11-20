/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:10:13 by hfunctio          #+#    #+#             */
/*   Updated: 2021/11/20 19:21:42 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(void)
{
	std::string command;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		std::cin >> command;
		if (command == "EXIT")
			break;
	}
	return 0;
}
