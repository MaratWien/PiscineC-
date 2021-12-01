/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:03:14 by hfunctio          #+#    #+#             */
/*   Updated: 2021/12/01 15:52:39 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

	PhoneBook::PhoneBook() { return;}
	PhoneBook::~PhoneBook() { return; }

void PhoneBook::addContact() {
	std::string	input;
	static int i = 0;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	contact[i].setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	contact[i].setLastName(input);

	std::cout << "Enter nickname name: ";
	std::getline(std::cin, input);
	contact[i].setNickName(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	contact[i].setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	std::cout << '\n';
	contact[i].setDarkSecret(input);

	i = i < 7 ? i + 1 : 0;
}

void PhoneBook::searchContact() {
	int input;
	int countContact = 0;

	std::cout << "******************************************************" << '\n';
	std::cout << "**  Index   *|*First Name*|*Last Name *|* Nickname  **" << '\n';
	std::cout << "******************************************************" << '\n';

	for (int j = 0; j < 8; j++) {
		firstName = contact[j].getFirstName();
		if (firstName.empty())
			break ;
		std::cout << "**" << j + 1 << std::setw(12);

		this->firstName = contact[j].getFirstName();
		if (firstName.length() > 10) {
			firstName = firstName.substr(0, 9) + ".";
			std::cout << "*|*" << firstName << std::setw(10 - firstName.length());
		}
		else
			std::cout << "*|*" << firstName << std::setw(13 - firstName.length());

		lastName = contact[j].getLastName();
		if (lastName.length() > 10) {
			lastName = lastName.substr(0, 9) + ".";
			std::cout << "*|*" << lastName << std::setw(10 - lastName.length());
		}
		else
			std::cout << "*|*" << lastName << std::setw(13 - lastName.length());

		nickName = contact[j].getNickName();
		if (nickName.length() > 10) {
			nickName = nickName.substr(0, 9) + ".";
			std::cout << "*|*" << nickName << std::setw(10 - nickName.length()) << "**" << '\n';
		}
		else
			std::cout << "*|*" << nickName << std::setw(13 - nickName.length()) << "**" << '\n';
		
		countContact++;
	}
	
	std::cout << "******************************************************" << '\n' << '\n';

	if (!countContact) {
		std::cout << "\e[0;31mPhobeBook is empty. ADD a contact." << '\n' << '\n';
		return ;
	}

	while (1) {
		std::cout << "\e[0;37mEnter index of contact(1-" << countContact << ") or enter 101 for return on prev.step: " << '\n';
		std::cin >> input;

		if (input == 101)
			break ;
		else if (input < 1 || input > countContact || !input) {
			std::cin.clear();
			std::cout << "\e[0;31mError. Invalid index. Enter correct index or enter 101 for return on prev.step." << '\n' << '\n';
			continue ;
		}
		else if (input > 0 && input <= countContact) {
			std::cout << '\n' << "First name is: " << contact[--input].getFirstName() << '\n';
			std::cout << "Last name is: " << contact[input].getLastName() << '\n';
			std::cout << "Nickname is: " << contact[input].getNickName() << '\n';
			std::cout << "Phone number is: " << contact[input].getPhoneNumber() << '\n';
			std::cout << "Darkest secret is: " << contact[input].getDarkSecret() << '\n' << '\n';
			continue ;
		}
	}
}
