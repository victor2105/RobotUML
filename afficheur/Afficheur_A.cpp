/*
 * Afficheur_A.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */
 
#include <iostream>
#include "../afficheur/Afficheur_A.h"
#include "../afficheur/Representation.h"


using namespace std;

Afficheur_A::~Afficheur_A(){

}



void Afficheur_A::update(const Representation* observable){
  	Robot * r = (Robot *) observable;
	//cout << observable->test << endl;
  		this->robot.direction = r->direction;
  		this->robot.plot = r->plot;
  		this->robot.position = r->position;
  		this->robot.object = r->object;
  		this->robot.aObjet = r->aObjet;
  	}

void Afficheur_A::afficher() {
	cout << "----------------------------------------------" << endl;
	cout << "Robot" << endl;
	cout << "Position : " << this->robot.position.getx() << ","<< this->robot.position.gety() << endl;
	cout << "Direction :" << this->robot.direction << endl ;
	cout << "Objet : "; if(robot.aObjet) cout << "Oui" << endl; else cout << endl;
	cout << "----------------------------------------------" << endl;
}
