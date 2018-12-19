#include <string>
#include "GUI.h"
#include "CrewMember.h"

using namespace std;

int main(){
    GUI gui = GUI();
    CrewMember cm =  CrewMember("Joe3000");
    gui.showCrewMember( cm);

    cm.~CrewMember();
    return 0;
}