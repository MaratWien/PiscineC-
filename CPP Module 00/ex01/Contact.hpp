/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:14:09 by hfunctio          #+#    #+#             */
/*   Updated: 2021/12/01 13:20:28 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkSecret;
public:
	~Contact();
	Contact();
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkSecret(std::string str);
	
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkSecret();
	
};

#endif