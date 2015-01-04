/*
 * Tourner.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Tourner.h"

Tourner::Tourner() {
	// TODO Auto-generated constructor stub

}

Tourner::~Tourner() {
	// TODO Auto-generated destructor stub
}

Commande * Tourner::constructeurVirtuel(Invocateur * i){
	string d = i->getString();
	return new Tourner(d);
}
void Tourner::execute(Robot * r){
	robot = r;
	dAnsienne = r->direction;
	robot->tourner(dNouvelle);
}
void Tourner::desexecute(){
	robot->direction = dAnsienne;
}
