#ifndef GUI_H
#define GUI_H

#include "Weapon.h"
#include "CrewMember.h"
#include <string>

class GUI{
    public:
    GUI();
    void showWeapon(Weapon & w);
    void showCrewMember(CrewMember cm);

    std::string setlength(std::string txt, int len);
};

#endif