#include <iostream>
#include "Dice.h"
#include <stdlib.h> 
#include <time.h> 

using namespace std;


Dice::Dice(){
    cout<<"New Dice";
}

Dice::~Dice(){
    cout<<"Dice Destroyed";
}

void Dice::playWithDice(){
    cout<<"\nNEW GAME\n\n  t:throw dice \n  x:end the game\nINPUT: ";
    bool gameover(false);
    srand(time(NULL)); 

    int nbtrows[6];
    nbtrows[0]=0;
    nbtrows[1]=0;
    nbtrows[2]=0;
    nbtrows[3]=0;
    nbtrows[4]=0;
    nbtrows[5]=0;

    while(!gameover){
        char input;
        cin >> input;

        switch(input){

            case 't':
                int diceval;
                diceval = rand() % 6 +1;
                nbtrows[diceval-1]+=1;
                cout<<intToCube(diceval);


                break;
            
            case 'x':
                gameover=true;
                break;
            default:
                cout<<"invalide";
        }

    cout << nbtrows[0]
    <<" "<<nbtrows[1]
    <<" "<<nbtrows[2]
    <<" "<<nbtrows[3]
    <<" "<<nbtrows[4]
    <<" "<<nbtrows[5];
    }
}
    

string Dice::intToCube(int nb){
    string face("\n");

    switch(nb){
        case 1:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |           | \n";
            face+=" |     *     | \n";
            face+=" |           | \n";
            face+=" |___________| \n";
            break;

        case 2:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |        *  | \n";
            face+=" |           | \n";
            face+=" |  *        | \n";
            face+=" |___________| \n";
            break;  

        case 3:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |        *  | \n";
            face+=" |     *     | \n";
            face+=" |  *        | \n";
            face+=" |___________| \n";
            break;

        case 4:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |  *     *  | \n";
            face+=" |           | \n";
            face+=" |  *     *  | \n";
            face+=" |___________| \n";
            break;  

        case 5:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |  *     *  | \n";
            face+=" |     *     | \n";
            face+=" |  *     *  | \n";
            face+=" |___________| \n";
            break;

        case 6:
            face+="  ___________  \n";
            face+=" |           | \n";
            face+=" |  *     *  | \n";
            face+=" |  *     *  | \n";
            face+=" |  *     *  | \n";
            face+=" |___________| \n";
            break; 

        default:
            face+="WTF is this dice\n";   
    }



    return face;
    }


