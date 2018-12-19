main: test.cc 
	g++ -DEBUG -o test test.cc

main: main.cc GUI.o CrewMember.o
	g++ -Wall -std=c++11 -DEBUG -o main main.cc GUI.o CrewMember.o

GUI.o: GUI.h GUI.cpp CrewMember.o
	g++ -Wall -std=c++11 -DEBUG -c GUI.cpp CrewMember.o

CrewMember.o: CrewMember.h CrewMember.cpp
	g++ -Wall -std=c++11 -DEBUG -c CrewMember.cpp
