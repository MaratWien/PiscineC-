/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:14:17 by hfunctio          #+#    #+#             */
/*   Updated: 2021/11/30 22:31:19 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

	Contact::Contact() { return;}
	Contact::~Contact() { return; }
/*
Функции доступа(геттеры, сеттеры) - это короткая открытая функция, здачачей которой
является получение или изменение значения закрытой переменной-члена класса. Они имеют
возможность получать(get)/устанавливать(set) значение закрытым переменным-класса.
*/
void Contact::setFirstName(std::string str) {
	firstName = str;
}

void Contact::setLastName(std::string str) {
	lastName = str;
}

void Contact::setNickName(std::string str) {
	nickName = str;
}

void Contact::setPhoneNumber(std::string str) {
	phoneNumber = str;
}

void Contact::setDarkSecret(std::string str) {
	darkSecret = str;
}

std::string	Contact::getFirstName() {
	return firstName;
}

std::string	Contact::getLastName() {
	return lastName;
}

std::string	Contact::getNickName() {
	return nickName;
}

std::string	Contact::getPhoneNumber() {
	return phoneNumber;
}

std::string	Contact::getDarkSecret() {
	return darkSecret;
}

