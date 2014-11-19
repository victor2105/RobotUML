#include <iostream>
#include "objets/Robot.h"
#include "./afficheur/Afficheur.h"
#include "./afficheur/Representation.h"
#include "./afficheur/Afficheur_A.h"

using namespace std;

int main(){

<<<<<<< HEAD
	string cmd, direction;
	Robot robot;
	int x, y;

	do{
		cout << "----------------------------------------------" << endl;
		cout << "Robot" << endl;
		cout << "Position : " << robot.position.getx() <<","<<robot.position.gety() << endl;
		cout << "Direction :" << robot.direction << endl;
		cout << "----------------------------------------------" << endl;

		cin >> cmd ;
		if(cmd == "avancer"){
			cin >> x >> y ;
			robot.avancer(x,y);
		}
		if(cmd == "tourner"){
			cin >> direction ;
			robot.tourner(direction);
		}
	}while(cmd != "exit");
=======
	Afficheur_A aff;
	Afficheur_A aff2;
    //un faux bloc pour limiter la portée
	{
		Afficheur rep;
	 	aff2.attacher(&rep);
		aff.attacher(&rep);
		aff.change(31);
		aff2.change(20);
	      
		cout << "test" << endl; 
		aff.change(45);
	}
>>>>>>> e6a560830bc1814b135bd1a5cdb58f6fc5e6489b
	return 0;
}
