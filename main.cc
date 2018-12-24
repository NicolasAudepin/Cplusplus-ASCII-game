#include <string>
#include <iostream>
#include "GUI.h"
#include "CrewMember.h"
#include "Weapon.h"

using namespace std;

int main(){
    GUI gui = GUI();

   
    CrewMember *pjohn(0);

    pjohn =new  CrewMember("CyberJohnatan");
    
    gui.showCrewMember(*pjohn);

    delete pjohn;

    Weapon cb = Weapon("CyberGun300", 10);

    Weapon bw = Weapon("U.L.T.R.A_Laser",50);

    gui.showWeapon(cb);
    gui.showWeapon(bw);
    
    
    //cb.~Weapon();

    //bw.~Weapon();

    cout <<"\n\nGAME OVER \n";
    return 0;
}