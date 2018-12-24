#include <iostream>
#include "Dice.h"

using namespace std;


Dice::Dice(){
    cout<<"New Dice";
}

Dice::~Dice(){
    cout<<"Dice Destroyed";
}

void Dice::playWithDice(){
    cout<<"\nNEW GAME\n\nt:throw dice \nx:end the game";
    bool gameover(false);
    while(!gameover){
        char input;
        cin >> input;

        switch(input){

            case 't':
                cout<<"T";
                cout<<"\n";
                break;
            
            case 'x':
                gameover=true;
                break;
            default:
                cout<<"invalide";
        }
    }
    

}
