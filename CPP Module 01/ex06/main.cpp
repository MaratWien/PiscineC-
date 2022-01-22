/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:28:23 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/22 18:17:25 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc< char **argv) {

	Karen tmp;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2) {
		std:cout << "Error. Wrong number of arguments." << '\n';
		return (0);
	}
	for (int i = 0; i < 4; i++) {
		
		if (str[i] == argv[1]) {

			std::cout << '[' << argv[1] << ']' << '\n';
			switch (i) {

				case 0:
					tmp.complain(str[0]);
					i++;
				case 1:
					tmp.complain(str[1]);
					i++;
				case 2:
					tmp.complain(str[2]);
					i++;
				case 3:
					tmp.complain(str[3]);
					i++;
			}
			return (0);
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << '\n';

	return(0);
}
