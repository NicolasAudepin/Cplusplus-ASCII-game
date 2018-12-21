#ifndef WEAPON_H
#define WEAPON_H

#include "CrewMember.h"
#include <string>

class Weapon{

    private:
    std::string name;
    int damage;
    bool equipped;
    

    public:

    Weapon(std::string _name, int _damage);
    ~Weapon();

    CrewMember getOwner();
    bool getEquipped();
    int getDamage();
    std::string getName();

    

};


#endif