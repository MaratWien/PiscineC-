/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:36 by hfunctio          #+#    #+#             */
/*   Updated: 2021/12/01 15:45:49 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
private:
	Contact contact[8];

public:
	PhoneBook();
	~PhoneBook();
	void 		addContact();
	void 		searchContact();
	std::string	data;
	std::string firstName;
	std::string	lastName;
	std::string nickName;
};

#endif