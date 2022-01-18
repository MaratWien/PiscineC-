#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
private:
	Weapon &s_weapon;
	std::string name;
public:
	HumanA(std::string t_name, Weapon &s_weapon) : s_weapon(s_weapon), name(t_name) {};
	~HumanA() {};
	void attack(void);
};


#endif