
#include <string>
#include "Weapon.h"

    CrewMember Weapon::getOwner(){
        return owner;
    };
    bool Weapon::getEquipped(){
        return equipped;
    };
    int Weapon::getDamage(){
        return damage;
    };
    std::string Weapon::getName(){
        return name;
    };