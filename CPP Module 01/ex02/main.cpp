/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:09:38 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 17:49:56 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

std::string str1 = "HI THIS IS BRAIN";
std::string &stringREF = str1;
std::string *stringPTR = &str1;

std::cout << &str1 << '\n';
std::cout << &stringREF << '\n';
std::cout << stringPTR << '\n';
std::cout << *stringPTR << '\n';
std::cout << stringREF << '\n';

return (0);
}
