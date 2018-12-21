
#include <string>
#include <iostream>
#include "Weapon.h"

using namespace std;

    bool Weapon::getEquipped(){
        return equipped;
    };
    int Weapon::getDamage(){
        return damage;
    };
    std::string Weapon::getName(){
        return name;
    };

    
    Weapon::Weapon(std::string _name, int _damage){
        name=_name;
        damage=_damage;
        equipped = false;
        cout<<"\n"<<name <<" created";


    };


    Weapon::~Weapon(){
        cout<<"\n the "<<name<<" has broken";
    };