#include "GUI.h"
#include <iostream>
#include <vector>
#include <string>
#include "CrewMember.h"
using namespace std;

GUI::GUI(){

};

void GUI::showCrewMember(CrewMember & cm){
    string output("\n");

    output+="\n _________________________";
    output+="\n|  " + cm.getName() +"                |";
    output+="\n|_________________________|";
    output+="\n|  Health: "+std::to_string(cm.getHealth())+"             |"; 
    output+="\n|  Hunger: "+std::to_string(cm.getHunger())+"             |"; 
    output+="\n|  Weight: "+std::to_string(cm.getWeight())+"             |"; 
    output+="\n|_________________________|";

    cout<<output;
}


void GUI::showList(vector<string> names, vector<int> values){

}
