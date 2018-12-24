#include <string>
#include <iostream>
#include "GUI.h"
#include "CrewMember.h"
#include "Weapon.h"
#include "Dice.h"

using namespace std;

int main(){

    Dice d = Dice();

    d.playWithDice();
    

    cout <<"\n\nGAME OVER \n";
    return 0;
}