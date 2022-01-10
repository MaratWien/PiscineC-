/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:59:57 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 15:14:59 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

Zombie first;
Zombie second("Rick");
Zombie* third = newZombie("Stubzzz");

first.announce();
second.announce();
third->announce();
randomChump("Danya");

delete third;

return (0);
}
