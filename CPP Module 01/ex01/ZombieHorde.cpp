/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:47:31 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 16:44:08 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
	
	Zombie* zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].name = name;
	
	return (zombie);
}
