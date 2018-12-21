#include <string>
#include <iostream>
#include "GUI.h"
#include "CrewMember.h"
#include "Weapon.h"

using namespace std;

int main(){
    GUI gui = GUI();

   


    CrewMember cm =  CrewMember("CyberJohnatan");
    CrewMember *c = &cm;
    gui.showCrewMember( *c);

    cm.~CrewMember();

    Weapon cb = Weapon("CyberGun300", 10);

    Weapon bw = Weapon("GoodOldEfficientGun",50);

    gui.showWeapon(cb);
    gui.showWeapon(bw);
    
    
    cb.~Weapon();

    bw.~Weapon();
    return 0;
}