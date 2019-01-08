#include "GUI.h"
#include <iostream>
#include <vector>
#include <string>
#include "CrewMember.h"
#include "Weapon.h"
using namespace std;

GUI::GUI(){

};

GUI::~GUI(){
    cout<<"\n end GUI";
}

void GUI::showCrewMember(CrewMember & cm){
    string output("\n");

    

    output+="\n _________________________ ";
    output+="\n|  " + setlength(cm.getName(),23) +"|";
    output+="\n|_________________________|";
    output+="\n|  Health: "+setlength(std::to_string(cm.getHealth()),15)+"|"; 
    output+="\n|  Hunger: "+setlength(std::to_string(cm.getHunger()),15)+"|"; 
    output+="\n|  Weight: "+setlength(std::to_string(cm.getWeight()),15)+"|";
    output+="\n|  Weapon: "+setlength(std::to_string(cm.getWeapon().getName()),15)+"|"; 
    output+="\n|_________________________|";

    cout<<output;
}

void GUI::showWeapon(Weapon & w){
    string output("\n");
    output+="\n _______________________";
    output+="\n|  "+setlength(w.getName(),21)+"|";
    output+="\n|_______________________|";
    output+="\n|  Damage: "+setlength(std::to_string(w.getDamage()),13)+"|";
    output+="\n|_______________________|";

    cout<<output;
};




//cut the text if longer than len and pan it with space bar to fill the space if shorter
 std::string GUI::setlength( std::string txt, int len){

    int txtlen =  txt.length();

    if(txtlen<len){
        int dif = len-txtlen;

        for(int i = 0; i<dif; i++){
            txt+=" ";
        }
    }
    else{
        txt.resize(len);
    }
    return txt;
 };
