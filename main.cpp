#include <iostream>
#include "objets/Robot.h"
#include "./afficheur/Afficheur.h"
#include "./afficheur/Representation.h"
#include "./afficheur/Afficheur_A.h"

using namespace std;

int main(){

	string cmd, direction;
	Robot robot;
	int x, y;

			cout << "----------------------------------------------" << endl;
			cout << "Robot" << endl;
			cout << "Position : " << robot.position.getx() <<","<<robot.position.gety() << endl;
			cout << "Direction :" << robot.direction << endl;
			cout << "Objet : "; if(robot.aObjet) cout << "Oui" << endl; else cout << endl;
			cout << "----------------------------------------------" << endl;

			cin >> cmd ;

	do{

		cout << cmd << endl;

		if(cmd == "avancer"){
			cin >> x >> y ;
			robot.avancer(x,y);
		}
		if(cmd == "tourner"){
			cin >> direction ;
			robot.tourner(direction);
		}
		if(cmd == "rencontrerPlot"){
			int plot;
			cin >> plot ;
			robot.rencontrerPlot(Plot(plot));
		}

		if(cmd == "evaluerPlot"){
			cout << robot.evaluerPlot() << endl ;
		}

		if(cmd == "peser"){
			cout << robot.peser() << endl;
		}

		if(cmd == "saisir"){
			int poids;
			cin >> poids ;
			robot.saisir(Object(poids));
		}

		if(cmd == "figer"){
			robot.figer();
		}

		if(cmd == "repartir"){
			robot.repartir();
		}

		if(cmd == "poser"){
			robot.poser();
		}

		cout << "----------------------------------------------" << endl;
		cout << "Robot" << endl;
		cout << "Position : " << robot.position.getx() <<","<<robot.position.gety() << endl;
		cout << "Direction :" << robot.direction << endl;
		cout << "Objet : "; if(robot.aObjet) cout << "Oui" << endl; else cout << endl;
		cout << "----------------------------------------------" << endl;

	}while(cin >> cmd);
/*
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
	}*/
	return 0;
}

