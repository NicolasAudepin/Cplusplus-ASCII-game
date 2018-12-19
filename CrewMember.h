#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include <string>

class CrewMember{

    private:

    std::string name;
    int health;
    int hunger;
    int weight;

    public:

    CrewMember(std::string _name);
    ~CrewMember();

    std::string getName();
    int getHealth();
    int getHunger();
    int getWeight();


};

#endif