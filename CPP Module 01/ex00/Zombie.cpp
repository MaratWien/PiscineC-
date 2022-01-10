/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:05:44 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 15:20:04 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() {
	
std::cout << name << " is destroyed." << '\n';

}

void Zombie::announce(void) {

std::cout << '<' << name << '>' << "  BraiiiiiiinnnzzzZ... " << '\n';

}
