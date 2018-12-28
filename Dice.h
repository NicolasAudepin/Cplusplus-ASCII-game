#ifndef DICE_H
#define DICE_H
#include <string>

class Dice{
public:
Dice();
~Dice();
void playWithDice();
void throwDice();

private:
std::string intToCube(int i);
};


#endif