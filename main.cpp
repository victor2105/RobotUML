#include <iostream>
#include "objets/Robot.h"
#include "./afficheur/Afficheur.h"
#include "./afficheur/Representation.h"
#include "./afficheur/Afficheur_A.h"

using namespace std;

int main(){

	string cmd;						// Pour lire le command
	string direction;				// Pour lire la direction right ou left
	int x, y;						// Pour lire la position (x, y)

	Robot robot;					// Robot

	Afficheur_A aff;				// Pour montrer quelques informations du Robot

	robot.attacher(&aff);			// Attacher le Afficheur_A aff au robot.
									// Le robot est aussi une Representation
	do{

		if(cmd == "avancer"){
			cin >> x >> y ;			// Le method avancer doit recevoir la position (x, y).
			robot.avancer(x,y);
		}
		if(cmd == "tourner"){
			cin >> direction ;		// Le method tourner doit recevoir la direction right ou left.
			robot.tourner(direction);
		}
		if(cmd == "rencontrerPlot"){
			int plot;
			cin >> plot ;			// Le method rencontrerPlot doit recevoir un plot.
			robot.rencontrerPlot(Plot(plot));
		}
		if(cmd == "evaluerPlot"){
			cout << robot.evaluerPlot() << endl ;
		}
		if(cmd == "peser"){
			cout << robot.peser() << endl ;
		}
		if(cmd == "saisir"){
			int poids;
			cin >> poids ;			// Le method saisir doit recevoir un Object qui a un poids.
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

		cout << cmd << endl;		// Quel command a été utilisé.
		aff.afficher();				// Montre quelques informations du robot.

	}while(cin >> cmd);				// Lire un nouvelle command.

	return 0;
}

