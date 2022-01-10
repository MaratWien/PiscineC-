/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:31:47 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 16:46:38 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

Zombie* 	zombie = NULL;
int			nbr;
std::string newName;

std::cout << "Enter number and name of zombies: ";
std::cin >> nbr >> newName;

zombie = zombie->zombieHorde(nbr, newName);

zombie->announce(nbr);

delete [] zombie;

return (0);
}
