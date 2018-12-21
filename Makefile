main: test.cc 
	g++ -DEBUG -o test test.cc

main: main.cc GUI.o CrewMember.o Weapon.o
	g++ -Wall -std=c++11 -DEBUG -o main main.cc GUI.o CrewMember.o Weapon.o

GUI.o: GUI.h GUI.cpp CrewMember.o Weapon.o
	g++ -Wall -std=c++11 -DEBUG -c GUI.cpp CrewMember.o Weapon.o

CrewMember.o: CrewMember.h CrewMember.cpp
	g++ -Wall -std=c++11 -DEBUG -c CrewMember.cpp

Weapon.o: Weapon.h Weapon.cpp
	g++ -Wall -std=c++11 -DEBUG -c Weapon.cpp
