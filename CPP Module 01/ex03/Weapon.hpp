
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
private:
	std::string weapon;
public:
	Weapon(std:: t_weapon =  "none") : weapon(t_weapon) {};
	~Weapon() {};
	
	void setType(std::string str);
	std::string	const &getType(void);
};

#endif