/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:33:08 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 16:46:32 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE HPP
# include <iostream>

class Zombie {
private:
	std::string name;	
public:
	Zombie(std::string zombie_name = "Stubz") : name(zombie_name) {};
	~Zombie();
	void announce(int N);
	Zombie* zombieHorde(int N, std::string name);
};
//Zombie* zombieHorde(int N, std::string name);
#endif