/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 19823296 <19823296@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:33:08 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/12 14:36:15 by 19823296         ###   ########.fr       */
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

#endif