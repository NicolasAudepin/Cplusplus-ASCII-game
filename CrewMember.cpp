#include "CrewMember.h"
#include <string>
#include <iostream>

using namespace std;

CrewMember::CrewMember(string _name){
    name=_name;
    health=10;
    hunger=10;
    weight=70;
};

CrewMember::~CrewMember(){
    cout <<"\n"<< name <<" has died";
}



//GETTER & SETTERS

int CrewMember::getHealth(){
    return health;
}

int CrewMember::getHunger(){
    return hunger;
}

int CrewMember::getWeight(){
    return weight;
}

string CrewMember::getName(){
    return name;

}
