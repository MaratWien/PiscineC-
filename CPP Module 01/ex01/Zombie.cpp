/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:45:16 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 16:48:37 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() {
	
std::cout << name << " is destroyed." << '\n';

}

void Zombie::announce(int N) {

for (int i = 0; i < N; i++)
	std::cout << i+1 << ". " << '<' << name << '>' << "  BraiiiiiiinnnzzzZ... " << '\n';

}
