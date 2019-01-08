#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "Weapon.h"
#include <string>

class CrewMember{

    private:

    std::string name;
    int health;
    int hunger;
    int weight;
    Weapon weapon;

    //Weapon* equippedWeapon;
    static Weapon fist= Weapon("Fist", 1);

    public:

    CrewMember(std::string _name);
    ~CrewMember();

    std::string getName();
    int getHealth();
    int getHunger();
    int getWeight();
    Weapon getWeapon(); 


};

#endif