/*
 * Avancer.cpp
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#include "Avancer.h"

Avancer::~Avancer() {
	// TODO Auto-generated destructor stub
}

Commande * Avancer::constructeurVirtuel(Invocateur * i){
	int x = i->getInt();
	int y = i->getInt();
	Position p(x, y);
	return new Avancer(p);
}
void Avancer::execute(Robot * r){
	robot = r;
	robot->avancer(pNouvelle.x,pNouvelle.y);
}
void Avancer::desexecute(){
	robot->position = pAncienne;
}
