/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:00:25 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/10 15:20:14 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
private:
	std::string name;	
public:
	Zombie(std::string zombie_name = "Oleg") : name(zombie_name) {};
	~Zombie();
	void announce(void);
};
Zombie* newZombie(std::string name );
void randomChump(std::string name);
#endif