#include "Weapon.hpp"

std::string const &Weapon::getType(void) { return(weapon) } ;

void Weapon::setType(std::string t_weapon) { weapon = t_weapon };
