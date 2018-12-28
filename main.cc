#include <string>
#include <iostream>
#include "GUI.h"
#include "CrewMember.h"
#include "Weapon.h"
#include "Dice.h"

using namespace std;

int main(){
    GUI gui = GUI();
    CrewMember joe = CrewMember("Galilee");

    gui.showCrewMember(joe);



    cout <<"\n\nGAME OVER \n";
    return 0;
}