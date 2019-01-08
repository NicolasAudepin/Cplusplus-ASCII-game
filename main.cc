#include <string>
#include <iostream>
#include "GUI.h"
#include "CrewMember.h"
#include "Weapon.h"

using namespace std;

int main(){
    GUI gui = GUI();

   


    CrewMember *cm = new CrewMember("CyberJohnatan");
    gui.showCrewMember( *cm);

    delete cm;

    Weapon cb = Weapon("CyberGun300", 10);

    Weapon bw = Weapon("GoodOldEfficientGun",50);

    gui.showWeapon(cb);
    gui.showWeapon(bw);
    
    
    cb.~Weapon();

    

    bw.~Weapon();

    gui.~GUI();

    cout<<"\nend main";
    return 0;
}