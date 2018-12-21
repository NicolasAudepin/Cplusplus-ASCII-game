#ifndef GUI_H
#define GUI_H

#include <string>
#include <vector>


#include "CrewMember.h"

class GUI{
    public:
    GUI();
    void showCrewMember(CrewMember & cm);

    void GUI::showList(vector<string> names, vector<int> values);
};

#endif