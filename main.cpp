#include <iostream>
#include "objets/Robot.h"
#include "./afficheur/Afficheur.h"
#include "./afficheur/Representation.h"
#include "./afficheur/Afficheur_A.h"

using namespace std;

int main(){

	string cmd, direction;
	Robot robot;
	Afficheur_A aff;

	robot.attacher(&aff);

	int x, y;


	do{
		cout << "----------------------------------------------" << endl;
		cout << "                commande posible : " << endl;
		cout << "|     avancer x y (avec x et y la position)     |" << endl;
		cout << "|    tourner dir (avec dir : left, right...)    |" << endl;
		cout << "| rencontrerPlot x (avec x la hauteur du plot)  |" << endl;
		cout << "|                 evaluerPlot                   |" << endl;
		cout << "|                     peser                     |" << endl;
		cout << "|                     figer                     |" << endl;
		cout << "|                  repartir                     |" << endl;
		cout << "|       saisir x (x le poid a saisir )          |" << endl;
		cout << "|                    poser                      |" << endl;
		cout << "----------------------------------------------" << endl;
		
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


		cout << cmd << endl;
		aff.afficher();

	}while(cin >> cmd);

	return 0;
}

